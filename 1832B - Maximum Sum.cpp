#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> arr(n);
        for(auto &c:arr){
            cin>>c;
        }



        sort(arr.begin(),arr.end());
        vector<ll> pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=arr[i]+pre[i-1];

        }
        ll ans=0;
        for(int i=0;i<=k;i++){
            int l=i;
            int r=k-i;
            if(2*l+r>=n) continue;
            ll s=0;
            if(2*l-1>=0) s=pre[2*l-1];
            ll e=pre[n-1-r];
            ans=max(ans,e-s);
        }
        cout<<ans<<endl;
    }
}