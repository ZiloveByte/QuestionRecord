#include <bits/stdc++.h>
using namespace std;
int n,m;

struct node{
    int bmh;
    int cj;
}xs[5005];

bool cmp(node a,node b){
    if(a.cj==b.cj){
        return a.bmh<b.bmh;
    }
    return a.cj>b.cj;
}

void solve(){
    cin>>n>>m;
    int fspm=floor(m*1.5);
    for(int i=0;i<n;i++){
        cin>>xs[i].bmh>>xs[i].cj;
    }
    sort(xs,xs+n,cmp);
    int score = xs[fspm-1].cj;
    int count = fspm;
    while(count < n && xs[count].cj == score){
        count++;
    }
    cout<<score<<" "<<count<<"\n";
    for(int i=0;i<count;i++){
        cout<<xs[i].bmh<<" "<<xs[i].cj<<"\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}