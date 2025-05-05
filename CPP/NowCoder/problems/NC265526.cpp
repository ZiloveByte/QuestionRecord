#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int temp=n-m;
    temp+x>=y?cout<<"Yes\n":cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}