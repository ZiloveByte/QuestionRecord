#include <bits/stdc++.h>
using namespace std;

struct people{
    string name;
    int fx;
}p[100050];


void solve(){
    int n,m,x,y,mark=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>p[i].fx>>p[i].name;
    }
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        if(p[mark].fx==0&&x==0){
            mark=(mark-y+n)%n;
        }else if(p[mark].fx==0&&x==1){
            mark=(mark+y)%n;
        }else if(p[mark].fx==1&&x==0){
            mark=(mark+y)%n;
        }else if(p[mark].fx==1&&x==1){
            mark=(mark-y+n)%n;
        }
        while(mark<=0)mark+=n;
    }
    cout<<p[mark].name;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}