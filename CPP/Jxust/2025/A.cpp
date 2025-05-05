#include <bits/stdc++.h>
using namespace std;

const int MM=1e9+7;

long long pow_mod(long long base,int exp){
    if(exp==0)return 1;
    base%=MM;
    long long res=1;
    while(exp>0){
        if(exp%2==1){
            res=(res*base)%MM;
        }
        base=(base*base)%MM;
        exp/=2;
    }
    return res;
}

void solve(){
    int n,m,l,r,q;
    cin>>n>>m;
    vector<int>a(n+2,0),b(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>l>>r>>q;
        if(q==3){
            for(int k=l;k<=r;k++){
                a[k]++;
            }
        }else {
            for(int k=l;k<=r;k++){
                b[k]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0) a[i]=1e9;
        if(b[i]==0) b[i]=1e9;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}