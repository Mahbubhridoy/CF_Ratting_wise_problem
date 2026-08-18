#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        int last_cover = -1; // last index that is covered by a protection

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                // if this '1' is not already covered
                if (i > last_cover) {
                    ans++;
                    last_cover = i + k - 1; // protect this one, covers next k-1 positions
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
