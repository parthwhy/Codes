    #include <bits/stdc++.h>

    using namespace std;

    

    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> mpp;
    int ans=0;
   
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
        ans+=mpp.size();
    }
    cout<<ans<<endl;

 

    }
        return 0;
    }