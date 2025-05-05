#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,l,r,res;
    cin>>n;
    vector<int>a(n,0);
    vector<int>s(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0) s[i]=a[i];
        else s[i]=s[i-1]+a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        if(l==1) res=s[r-1];
        else res=s[r-1]-s[l-2];
        cout<<res<<"\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}