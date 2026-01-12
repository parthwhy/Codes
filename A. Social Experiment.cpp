#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n<=3) cout<<n<<endl;
 
    else{
        int r=n%6;
    int x=r%2;
    cout<<x<<endl;
    }
 
 
 
    }
 
    return 0;
}