#include <bits/stdc++.h>
using namespace std;

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        long long n,x1,x2,y1,y2;
        cin >> n>>x1>>y1>>x2>>y2;
        long long dx=abs(x2-x1);
        long long dy=abs(y2-y1);
        
        long long ddx=0;
        if(x1<x2){
            ddx=x1;
        }           
        if(x1>x2){
            ddx=n-x1;
        } 
        long long ddy=0;
        if(y2>y1){
            ddy=y1;
        }
        if(y1>y2){
            ddy=n-y1;
        }
        long long ans=max(ddx+dx,ddy+dy);
        cout<<ans<<endl;


        
        } 

       
    

    return 0;
    }