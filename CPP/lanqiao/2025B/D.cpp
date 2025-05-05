#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c,d,a1,b1,c1;
    cin>>a>>b>>c>>d;
    for(int i=0;i<d;i++){
        a1=floor((b+c)/2);
        b1=floor((a+c)/2);
        c1=floor((a+b)/2);
        a=a1;
        b=b1;
        c=c1;
        if(a==b&&b==c){
            cout<<a<<" "<<b<<" "<<c<<"\n";
            return;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}