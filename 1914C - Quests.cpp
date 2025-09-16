    #include <bits/stdc++.h>

    using namespace std;

    

    int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> arr1(n),arr2(n);
    for(auto &c:arr1) cin>>c;
    for(auto &c:arr2) cin>>c;
    long long mx=0;
    long long ans=0;
    long long sum=0;
    for(int i=0;i<min(k,n);i++){
         sum+=(long long)arr1[i];
         mx=max(mx,(long long)arr2[i]);
         int x=k-i-1;
         ans=max(ans,sum+((long long)x*mx));
    }
    cout<<ans<<endl;


    }
        return 0;
    }