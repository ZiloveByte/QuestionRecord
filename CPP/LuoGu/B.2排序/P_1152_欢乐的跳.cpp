#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a[1005],b[1005],flag=1;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        b[i]=abs(a[i]-a[i+1]);
    }
    sort(b+1,b+n);
    for(int i=1;i<n;i++){
        if(i!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag) cout<<"Jolly\n";
    else cout<<"Not jolly\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}