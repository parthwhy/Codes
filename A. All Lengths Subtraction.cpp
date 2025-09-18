    #include <bits/stdc++.h>

    using namespace std;


    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n,k;
        cin >> n;
        vector<long long> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
           
        }
    int l=0,r=n-1;
    int curr=1;
    bool check=true;
    while(curr!=n){
        if(arr[l]==curr) {
            l++;
        }
        else if(arr[r]==curr){
            r--;
        }
        else{
            check=false;
            break;
        }
        curr++;
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

//       cout<<sum<<endl;

    }
        return 0;
    }