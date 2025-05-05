#include <bits/stdc++.h>
using namespace std;
int a[1000];

void solve(){
    int n,g,s;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-2;i>=0;i--){
        g=a[i]%10;
        s=a[i]/10;
        if(a[i]>a[i+1]){
            if(s>g||g>a[i+1]){
                cout<<"NO\n";
                return;
            }else a[i]=s;
        }
    }
    cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while (t--) solve();
}