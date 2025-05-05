#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
    ll x,y,z;
}zb[50005];

double jl(ll x1,ll x2,ll y1,ll y2,ll z1,ll z2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
}

bool cmp(node a,node b){
    return a.z<=b.z;
}

void solve(){
    double res=0.0;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>zb[i].x>>zb[i].y>>zb[i].z;
    sort(zb,zb+n,cmp);
    for(int i=0;i<n-1;i++){
        res+=jl(zb[i].x,zb[i+1].x,zb[i].y,zb[i+1].y,zb[i].z,zb[i+1].z);
    }
    printf("%.3lf",res);
}

int main(){
    solve();
    return 0;
}