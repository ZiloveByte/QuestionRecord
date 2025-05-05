#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,lens=0,mark=0;
    string s,ans="1";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        lens=s.length();
        if(lens>ans.length()){
            ans=s;
            mark=i;
        }else if(lens==ans.length()){
            bool isl=false;
            for(int j=0;j<lens;j++){
                if(s[j]>ans[j]){
                    isl=true;
                }else if(s[j]<ans[j]){
                    break;
                }
            }
            if(isl){
                ans=s;
                mark=i;
            }
        }
    }
    cout<<mark+1<<"\n"<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}