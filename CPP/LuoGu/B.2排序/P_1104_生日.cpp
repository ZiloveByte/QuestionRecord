#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
    string name;
    int y,m,d;
}p[105];

bool cmp(node a,node b){
    if(a.y!=b.y) return a.y<b.y;
    if(a.m!=b.m) return a.m<b.m;
    if(a.d!=b.d) return a.d<b.d;
    return true;
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i].name>>p[i].y>>p[i].m>>p[i].d;
    stable_sort(p,p+n,cmp);
    for(int i=0;i<n;i++) cout<<p[i].name<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}