#include <bits/stdc++.h>
using namespace std;

bool h(int n,int x){
    for(int i=0;i<7;i++){
        if(n%10==x){
            return true;
        }else{
            n/=10;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    if(h(n,x)){
        for(int i=1;i<=n;i++){
            cout<<i<<"\n";
        }
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(h(i,x)){
            continue;
        }else {
            cout<<i<<"\n";
        }
    }
}