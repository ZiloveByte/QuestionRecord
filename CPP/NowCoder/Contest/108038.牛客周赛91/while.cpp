#include <bits/stdc++.h>
using namespace std;
void solve(){
    int cnt=0;
    string s;
    cin>>s;
    if(s[0]!='w') cnt++;
    if(s[1]!='h') cnt++;
    if(s[2]!='i') cnt++;
    if(s[3]!='l') cnt++;
    if(s[4]!='e') cnt++;
    cout<<cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}