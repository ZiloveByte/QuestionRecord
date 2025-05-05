#include <bits/stdc++.h>
using namespace std;

struct node{
    int yw;
    int sx;
    int yy;
    int xh;
    int score;
}cj[500];

bool cmp(node a, node b) {
    if (a.score!=b.score) {
        return a.score>b.score;
    }
    if (a.yw!=b.yw) {
        return a.yw>b.yw;
    }
    return a.xh<b.xh;
}

void solve(){
    int n,sum=0,yw,sx,yy;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>cj[i].yw>>cj[i].sx>>cj[i].yy;
        sum=cj[i].yw+cj[i].sx+cj[i].yy;
        cj[i].xh=i;
        cj[i].score=sum;
    }
    sort(cj+1,cj+n+1,cmp);
    for(int i=1;i<=5;i++){
        cout<<cj[i].xh<<" "<<cj[i].score<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}