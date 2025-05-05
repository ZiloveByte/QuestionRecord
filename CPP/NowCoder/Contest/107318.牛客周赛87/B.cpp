#include <bits/stdc++.h>
using namespace std;

int length(int n){
    return (int)log10(n);
}

void solve(){
    int n,maxn=0,a=0,b=0,mark=1,res;
    cin>>n;
    int len=length(n);
    while(len--){
        a=n%(int)pow(10,mark);
        b=n/(int)pow(10,mark);
        mark++;
        res=a+b;
        if(res>maxn) maxn=res;
    }
    cout<<maxn<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++) solve();
    return 0;
}