#include <bits/stdc++.h>
using namespace std;

void solve(){
    for(int i=1;i<=9;i++){
        for(int k=1;k<=i;k++){
            printf("%d*%d= %02d",k,i,k*i);
            if(k!=i) cout<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    solve();
}