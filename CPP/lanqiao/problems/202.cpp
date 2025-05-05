#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    cout<<str;
    int len=str.size();
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]) {
                cout<<"NO\n"; 
                return;
            }
        }
    }
    cout<<"YES\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}