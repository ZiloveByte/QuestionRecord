#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    char x;
    int lens=s.length();
    if(lens==1){
        cout<<s<<"\n";
        return;
    }
    for(int i=0;i<lens-1;i++){
        if(s[i]<s[i+1]){
            x=s[i];
            s[i]=s[i+1];
            s[i+1]=x;
            cout<<s<<"\n";
            return;
        }
    }
    cout<<s<<"\n";
    return;
}

int main(){
    int _;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}