#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long ans=0;
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int start=1,end=n;
    for(int i=0;i<n;i+=2){
        ans+=a[i];
    }
    for(int i=1;i<n;i+=2){
        ans-=a[i];
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}