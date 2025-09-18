    #include <bits/stdc++.h>

    using namespace std;


    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n,k;
        cin >> n>>k;
        vector<long long> arr(n),dis(k);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
           
        }
        for (int i = 0; i < k; i++) {
            cin >> dis[i];
           
        }
      priority_queue<int> pq;
      for(auto c:arr){
        pq.push(c);
      }
      sort(dis.begin(),dis.end());
       int i=0;
       long long sum=0;
       while(!pq.empty() && i<k){
        int x=dis[i];
        if(pq.size()<x) break;
        for(int j=0;j<x-1;j++){
            sum+=pq.top();
            pq.pop();

        }
        pq.pop();
        i++;
       }
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
       cout<<sum<<endl;

    }
        return 0;
    }