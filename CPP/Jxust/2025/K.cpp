#include <bits/stdc++.h>
using namespace std;
int a[100050];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y,mark,q,h;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==5)mark=i;
    }
    q=mark-x;
    h=mark+y;
    while(q<=0)q+=n;
    while(h>n)h-=n;
    cout<<mark<<" "<<a[q]<<" "<<a[h]<<endl;
}