#include <bits/stdc++.h>
using namespace std;
int a[100],b[100],c[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
    m=m+k*10;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) c[i]=a[i]+b[i];
    sort(c,c+n);
    for(int i=1;i<=n;i++){
        while(m>0&&c[i]>=0){
            c[i]-=64;
            m--;
        }
        if(c[i]<=0) cnt++;
    }
    cout<<cnt;
}
