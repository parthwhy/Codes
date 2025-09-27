#include <bits/stdc++.h>

using namespace std;

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long  t;
    cin >> t;
    while (t--) {
        long long  n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<long long > arr(n);
        for(long long  i=0; i < n; i++){
           cin >> arr[i];
        }

        long long count_k = 0;
        map<long long , long long > mpp_k;
        long long  i_k = 0;
        for (long long  j = 0; j < n; ++j) {
            mpp_k[arr[j]]++;
            while (mpp_k.size() > k) {
                mpp_k[arr[i_k]]--;
                if (mpp_k[arr[i_k]] == 0) mpp_k.erase(arr[i_k]);
                i_k++;
            }
            long long  max_back = j - r + 1;
            long long  min_back = j - l + 1;
            long long  actual_back = max(i_k, max_back);
            if (actual_back <= min_back) {
                count_k += (min_back - actual_back + 1);
            }
        }

        long long count_k_minus_1 = 0;
        map<long long , long long > mpp_k_minus_1;
        long long  i_k_minus_1 = 0;
        for (long long  j = 0; j < n; ++j) {
            mpp_k_minus_1[arr[j]]++;
            while (mpp_k_minus_1.size() > k - 1) {
                mpp_k_minus_1[arr[i_k_minus_1]]--;
                if (mpp_k_minus_1[arr[i_k_minus_1]] == 0) mpp_k_minus_1.erase(arr[i_k_minus_1]);
                i_k_minus_1++;
            }
            long long  max_back = j - r + 1;
            long long  min_back = j - l + 1;
            long long  actual_back = max(i_k_minus_1, max_back);
            if (actual_back <= min_back) {
                count_k_minus_1 += (min_back - actual_back + 1);
            }
        }
        
        cout << count_k - count_k_minus_1 << endl;
    }
    return 0;
}