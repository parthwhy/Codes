#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        long long s, k, m;
        cin >> s >> k >> m;
        long long x = m % (2*k);
        long long ans = 0;
        if(x < k){
            ans = max(0LL, s - x);
        }
        else{
            ans = max(0LL, min(s, k) - (x - k));
        }
        
        cout << ans << endl;
    }
 
    return 0;
}