#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       vector<int> arr(n);
       int c0=0,c1=0;
       for(auto &c:arr) {cin>>c;
        if(c==1) c1+=1;
        if(c==0) c0+=1;
    }
    if(c0 && c1) cout<<"YES"<<endl;
    else if(c0==1 && !c1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


    }
    return 0;
}
