#include <bits/stdc++.h>
using namespace std;

long long get_min_time(long long n, long long k, map<long long, long long> &dp) {
    if (n == k) {
        return 0;
    }
    if (n < k) {
    return 2e18; 
    }
    if (dp.count(n)) {
   return dp[n];
    }

    long long left = get_min_time(n / 2, k, dp);
    long long right = get_min_time((n + 1) / 2, k, dp);

    return dp[n] = 1 + min(left, right);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
    cin >> n >> k;

    map<long long, long long> dp;
    long long ans = get_min_time(n, k, dp);

    if (ans >= 2e18) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }



    }
    
    return 0;
}