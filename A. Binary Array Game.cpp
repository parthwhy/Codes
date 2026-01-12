    #include <bits/stdc++.h>

    using namespace std;


    int  main() {
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(auto &c:arr) cin>>c;
        if(arr[0]==0 && arr[n-1]==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }

        return 0;
    }