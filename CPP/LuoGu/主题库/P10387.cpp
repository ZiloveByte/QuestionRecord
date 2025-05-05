#include <bits/stdc++.h>
using namespace std;

const long long N=1e5+10;

struct node{
    int x,y;
}a[N];

bool cmp(node a,node b){
    return a.y<b.y;
}

void solve(){
    long long n,s,tol=0,ans=0,tim=0;
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].y,tol+=a[i].x;
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        if(tol>=s){
            ans+=(a[i].y-tim)*s;
            tim=0;
            tol-=a[i].x;
            tim+=a[i].y;
        }else {
            ans+=(a[i].y-tim)*a[i].x;
            tol-=a[i].x;
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