    #include <bits/stdc++.h>

    using namespace std;


    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = 0;

        for (long long i = 1; i <= n; i++) {
            if (n % i == 0) {
                long long mx = -1e18; 
                long long mn = 1e18;
                long long sum = 0;
                for (long long j = 0; j < n; j++) {
                    sum += arr[j];
                    if ((j + 1) % i == 0) {
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        sum = 0;
                    }
                }
                ans = max(ans, mx - mn);
            }
        }
        cout << ans << endl;
    

    }
        return 0;
    }