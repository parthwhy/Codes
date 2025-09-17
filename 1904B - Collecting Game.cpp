    #include <bits/stdc++.h>

    using namespace std;

    

    int  main() {
    long long t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
   vector<pair<long long,long long>> arr(n);
   for(long long i=0;i<n;i++){
    long long a;
    cin>>a;
    arr[i]={a,i};
   }
   sort(arr.begin(),arr.end());
   vector<long long> sum(n);
   sum[0]=arr[0].first;
   for(long long i=1;i<n;i++){
    sum[i]=sum[i-1]+arr[i].first;
   }
   vector<long long> ans(n);
   for(long long i=0;i<n;i++){
        
    long long j=i;
    while(j<n){
        long long x=sum[j];
        pair<long long,long long> temp={x+1,INT_MIN};
        auto it=upper_bound(arr.begin(),arr.end(),temp);
        it--;
        
        long long index=it-arr.begin();
       
        if(index==j){
            break;
        }
        
        j=index;
    
    }
     ans[arr[i].second]=min(j,n-1);

   }
   for(auto c:ans){
    cout<<c<<" ";
   }
   cout<<endl;







    }
        return 0;
    }