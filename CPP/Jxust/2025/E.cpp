#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q,t,m,cnt=0;
    cin>>n>>q;
    string str;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>str;
        if(mp[str]==0)cnt++;
        mp[str]++;
    }
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==1){
            cin>>m;
            for(int k=0;k<m;k++){
                cin>>str;
                if(mp.count(str)==0)cnt++;
                mp[str]++;
            }
        }
        if(t==2){
            cin>>m;
            for(int k=0;k<m;k++){
                cin>>str;
                if(mp.count(str)==0)cout<<"NO\n"<<cnt<<"\n";
                if(mp.count(str)==1)cout<<"YES\n"<<mp[str]<<"\n";

            }
        }
        if(t==3){
            for(auto&[k,v]:mp) cout<<k<<" "<<v<<"\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}