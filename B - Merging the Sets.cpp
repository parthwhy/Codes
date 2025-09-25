#include <bits/stdc++.h>

using namespace std;




int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        map<int,vector<int>> times;
       

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
       //     sets[i].resize(k);
            for (int j = 0; j < k; j++) {
               int a;
                cin >> a;
                times[a].push_back(i);
            }
        }
        set<int> unique;
        bool all=true;

     for(int i=1;i<=m;i++){
    if(times[i].size()==1){
        unique.insert(times[i][0]);
    }    
    if(!times[i].size()) all=false;
    
    
    
    }
    int rem=n-unique.size();
    if(all && rem>=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

