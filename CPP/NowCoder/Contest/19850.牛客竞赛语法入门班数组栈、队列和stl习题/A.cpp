#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num[8]={1,2,3,4,5,6,7,8};
    do{
        for(int i=0;i<8;i++){
            cout<<num[i]<<" ";
        }
    }while(next_permutation(num,num+8));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}