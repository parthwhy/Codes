#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long  t;
    cin >> t;
  
    while (t--) {
        long long  n, k;
          
        cin >> n >> k ;
        string s;
        cin>>s;
       set<ll> whites,blacks;
       long long cur=1;
       for(long long i=0;i<2*(n+k);i++){
        whites.insert(i+1);
       }
       for(long long i=0;i<k;i++){
        long long a;
        cin>>a;
       
          whites.erase(a);
          blacks.insert(a);
        
       }
       for(long long i=0;i<n;i++){
        if(s[i]=='A'){
          cur++;
          whites.erase(cur);
          blacks.insert(cur);
        }
        else{
          cur=*whites.upper_bound(cur);
            whites.erase(cur);
          blacks.insert(cur);
           cur=*whites.upper_bound(cur);
          
        }
       }
       cout<<blacks.size()<<endl;
       for(auto c:blacks){
        cout<<c<<" ";
       }
        cout<<endl;
        



      
    }
    return 0;
}