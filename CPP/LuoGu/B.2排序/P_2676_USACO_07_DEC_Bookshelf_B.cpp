#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,b;
    cin>>n>>b;
    long long a[n],sum=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<long long>());
    for(int i=0;i<n;i++){
        sum+=a[i];
        ans++;
        if(sum>b){
            break;
        }
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}