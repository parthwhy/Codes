    #include <bits/stdc++.h>

    using namespace std;


    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n,k;
        cin >> n;
        vector<vector<int>> arr(n);
        vector<int> indeg(n,0);
        // vector<long long> arr(n);
        for (int i = 0; i < n-1; i++) {
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            if(x>y){
                arr[v-1].push_back(u-1);
                indeg[u-1]++;
            }
            else{
                arr[u-1].push_back(v-1);
                indeg[v-1]++;
            }

           
        }
        vector<int> ans(n);
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0) q.push(i);
        }
        int i=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
             ans[x]=i;
             i++;
            for(auto c:arr[x]){
                indeg[c]--;
                if(indeg[c]==0) {q.push(c);
               }
            }
        }
        for(auto c:ans) cout<<c<<" ";
        cout<<endl;




//       cout<<sum<<endl;

    }
        return 0;
    }