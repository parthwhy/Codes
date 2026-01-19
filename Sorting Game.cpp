#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // build sorted string: 000...0111...
        vector<int> arr2(n, 1);
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                arr2[j] = 0;
                j++;
            }
        }

        vector<int> idx;
        for (int i = 0; i < n; i++) {
            if (s[i] - '0' != arr2[i]) {
                idx.push_back(i + 1); // 1-based index
            }
        }

        // If no differing positions, already sorted
        if (idx.empty()) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << idx.size() << "\n";
            for (int x : idx) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
