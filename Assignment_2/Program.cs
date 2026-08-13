using System;
using System.Collections.Generic;
using System.Linq;

namespace LibraryManagement
{
    // 1. Interface
    public interface IBorrowable
    {
        bool BorrowBook(Book book);
        void ReturnBook(Book book);
    }

    // 2. Person
    public abstract class Person
    {
        public int Id { get; private set; }
        public string Name { get; private set; }

        protected Person(int id, string name)
        {
            Id = id;
            Name = name;
        }

        public abstract string GetRole();

        public override string ToString()
        {
            return $"[{GetRole()}] {Name} (ID: {Id})";
        }
    }

    // 3. Member
    public class Member : Person, IBorrowable
    {
        private readonly List<Book> books = new List<Book>();

        public DateTime JoinDate { get; private set; }

        public IReadOnlyList<Book> MyBooks => books.AsReadOnly();

        public Member(int id, string name) : base(id, name)
        {
            JoinDate = DateTime.Now;
        }

        public override string GetRole()
        {
            return "Member";
        }

        public bool BorrowBook(Book book)
        {
            if (!book.IsAvailable)
                return false;

            book.MarkAsBorrowed();
            books.Add(book);

            return true;
        }

        public void ReturnBook(Book book)
        {
            if (books.Remove(book))
                book.MarkAsReturned();
        }
    }

    // 4. Librarian
    public class Librarian : Person
    {
        public string Department { get; private set; }

        public Librarian(int id, string name, string dept)
            : base(id, name)
        {
            Department = dept;
        }

        public override string GetRole()
        {
            return "Librarian";
        }
    }

    // 5. Book
    public abstract class Book
    {
        public string Isbn { get; private set; }
        public string Title { get; private set; }
        public string Author { get; private set; }
        public bool IsAvailable { get; private set; } = true;

        protected Book(string isbn, string title, string author)
        {
            Isbn = isbn;
            Title = title;
            Author = author;
        }

        public void MarkAsBorrowed()
        {
            IsAvailable = false;
        }

        public void MarkAsReturned()
        {
            IsAvailable = true;
        }

        public abstract string GetBookInfo();
    }

    // 6. PrintedBook
    public class PrintedBook : Book
    {
        public int ShelfNumber { get; private set; }

        public PrintedBook(
            string isbn,
            string title,
            string author,
            int shelf)
            : base(isbn, title, author)
        {
            ShelfNumber = shelf;
        }

        public override string GetBookInfo()
        {
            return $"{Title} by {Author} " +
                   $"[Printed - Shelf {ShelfNumber}] - " +
                   $"{(IsAvailable ? "Available" : "Borrowed")}";
        }
    }

    // 7. EBook
    public class EBook : Book
    {
        public double Size { get; private set; }

        public EBook(
            string isbn,
            string title,
            string author,
            double size)
            : base(isbn, title, author)
        {
            Size = size;
        }

        public override string GetBookInfo()
        {
            return $"{Title} by {Author} " +
                   $"[EBook - {Size}MB] - " +
                   $"{(IsAvailable ? "Available" : "Borrowed")}";
        }
    }

    // 8. LoanRecord
    public class LoanRecord
    {
        public Member Member { get; private set; }
        public Book Book { get; private set; }
        public DateTime BorrowDate { get; private set; }
        public DateTime DueDate { get; private set; }
        public DateTime? ReturnDate { get; private set; }

        public bool IsReturned => ReturnDate.HasValue;

        public LoanRecord(
            Member member,
            Book book,
            int days = 14)
        {
            Member = member;
            Book = book;

            BorrowDate = DateTime.Now;
            DueDate = BorrowDate.AddDays(days);
        }

        public void MarkAsReturned()
        {
            ReturnDate = DateTime.Now;
        }
    }

    // 9. LateFeeCalculator
    public class LateFeeCalculator
    {
        private const double Fee = 5.0;

        public double CalculateFine(int days)
        {
            return days > 0 ? days * Fee : 0;
        }

        public double CalculateFine(
            DateTime due,
            DateTime ret)
        {
            int days = (ret.Date - due.Date).Days;

            return CalculateFine(days);
        }

        public double CalculateFine(LoanRecord loan)
        {
            DateTime ret = loan.ReturnDate ?? DateTime.Now;

            return CalculateFine(loan.DueDate, ret);
        }
    }

    // 10. LibrarySystem
    public class LibrarySystem
    {
        private readonly List<Book> books =
            new List<Book>();

        private readonly List<Member> members =
            new List<Member>();

        private readonly List<LoanRecord> loans =
            new List<LoanRecord>();

        private readonly LateFeeCalculator fee =
            new LateFeeCalculator();

        public void AddBook(Book book)
        {
            books.Add(book);

            Console.WriteLine(
                $"Added book: {book.Title}");
        }

        public void AddMember(Member member)
        {
            members.Add(member);

            Console.WriteLine(
                $"Registered member: {member.Name}");
        }

        public void BorrowBook(
            Member member,
            Book book)
        {
            bool ok = member.BorrowBook(book);

            if (ok)
            {
                loans.Add(
                    new LoanRecord(member, book));

                Console.WriteLine(
                    $"{member.Name} borrowed \"{book.Title}\".");
            }
            else
            {
                Console.WriteLine(
                    $"\"{book.Title}\" is currently unavailable.");
            }
        }

        // Overloading
        public void BorrowBook(
            int memberId,
            string isbn)
        {
            Member member =
                members.FirstOrDefault(
                    m => m.Id == memberId);

            Book book =
                books.FirstOrDefault(
                    b => b.Isbn == isbn);

            if (member == null || book == null)
            {
                Console.WriteLine(
                    "Member or book not found.");

                return;
            }

            BorrowBook(member, book);
        }

        public void ReturnBook(
            Member member,
            Book book)
        {
            LoanRecord loan =
                loans.FirstOrDefault(
                    x => x.Member == member &&
                         x.Book == book &&
                         !x.IsReturned);

            if (loan == null)
            {
                Console.WriteLine(
                    "No active loan record found.");

                return;
            }

            member.ReturnBook(book);
            loan.MarkAsReturned();

            double fine = fee.CalculateFine(loan);

            if (fine > 0)
            {
                Console.WriteLine(
                    $"{member.Name} returned " +
                    $"\"{book.Title}\" late. " +
                    $"Fine: {fine:C}");
            }
            else
            {
                Console.WriteLine(
                    $"{member.Name} returned " +
                    $"\"{book.Title}\" on time.");
            }
        }

        public double GetFine(
            Member member,
            Book book)
        {
            LoanRecord loan =
                loans.FirstOrDefault(
                    x => x.Member == member &&
                         x.Book == book);

            return loan == null
                ? 0
                : fee.CalculateFine(loan);
        }

        public void ShowBooks()
        {
            Console.WriteLine(
                "\n--- Available Books ---");

            foreach (
                Book book in
                books.Where(b => b.IsAvailable))
            {
                Console.WriteLine(
                    book.GetBookInfo());
            }
        }

        public void ShowBorrowed()
        {
            Console.WriteLine(
                "\n--- Borrowed Books ---");

            foreach (
                Book book in
                books.Where(b => !b.IsAvailable))
            {
                Console.WriteLine(
                    book.GetBookInfo());
            }
        }
    }


    // ==========================================================
    // 11. Program - Main Method
    // ==========================================================
    // This part is only for testing the program.
    //
    // All testing lines are commented with //.
    //
    // So currently Main() will not perform any testing.
    //
    // If you want to test any part:
    // Remove // from the beginning of that line.
    // ==========================================================

    class Program
    {
        static void Main()
        {
            // ==================================================
            // STEP 1: Create Library System
            // ==================================================
            // LibrarySystem lib = new LibrarySystem();


            // ==================================================
            // STEP 2: Create a Member
            // ==================================================
            // Member m1 = new Member(1, "Mahbub");


            // ==================================================
            // STEP 3: Create a Printed Book
            // ==================================================
            // Book b1 = new PrintedBook(
            //     "B001",
            //     "C# Basics",
            //     "John",
            //     10
            // );


            // ==================================================
            // STEP 4: Create an EBook
            // ==================================================
            // Book b2 = new EBook(
            //     "B002",
            //     "OOP Guide",
            //     "David",
            //     5.5
            // );


            // ==================================================
            // STEP 5: Add Books to Library
            // ==================================================
            // lib.AddBook(b1);
            // lib.AddBook(b2);


            // ==================================================
            // STEP 6: Register Member
            // ==================================================
            // lib.AddMember(m1);


            // ==================================================
            // STEP 7: Display Available Books
            // ==================================================
            // lib.ShowBooks();


            // ==================================================
            // STEP 8: Borrow a Book
            // ==================================================
            // lib.BorrowBook(m1, b1);


            // ==================================================
            // STEP 9: Display Available Books Again
            // ==================================================
            // lib.ShowBooks();


            // ==================================================
            // STEP 10: Display Borrowed Books
            // ==================================================
            // lib.ShowBorrowed();


            // ==================================================
            // STEP 11: Return the Book
            // ==================================================
            // lib.ReturnBook(m1, b1);


            // ==================================================
            // STEP 12: Keep Console Window Open
            // ==================================================
            // Console.ReadLine();
        }
    }
}