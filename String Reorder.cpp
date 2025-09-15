#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin>>s;
    vector<int> arr(26,0);
    //sort(s.begin(),s.end());

    for(auto c:s){
        arr[c-'A']++;
    }
    string ans="";
    int i=0;
    int n=s.size();
    while(ans.size()<s.size()){
        bool anything=false;
       for(int i=0;i<26;i++){
        if(arr[i]>0 && (ans.size()==0 || ans.back()!=('A'+i))){
            ans+=('A'+i);
            arr[i]--;
            int suffix=n-ans.size();
            bool can_fix=true;
            for(int j=0;j<26;j++){
               if(i!=j){
                if(arr[j]>(suffix+1)/2){
                    can_fix=false;
                    break;
                }
               }
               else{
                if(arr[j]>suffix/2){
                    can_fix=false;
                    break;
                }
               }
            }
            if(!can_fix){
                ans.pop_back();
                arr[i]++;
            }
            else{
                anything=true;
                break;
            }
        }
       }
    if(!anything ) break;
    }

    if(ans.size()!=s.size()) cout<<-1<<endl;

    // for(int i=0;i<s.size()-1;i++){
    //     if(s[i]==s[i+1]){
    //         cout<<-1;
    //         return 0;
    //     }
    // }
    else    cout<<ans<<endl;

    return 0;
}