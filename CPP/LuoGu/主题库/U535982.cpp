#include <bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    int n,res1=0,res2=0,res;
    cin>>n>>str;
    for(int i=0;i<2*n;i++){
        if(i%2==0&&str[i]=='A'){
            res1++;
        }
        if(i%2==0&&str[i]=='B'){
            res2++;
        }
        res=min(res1,res2);
    }
    cout<<res<<"\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}