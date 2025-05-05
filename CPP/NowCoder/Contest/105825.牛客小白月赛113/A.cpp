#include <bits/stdc++.h>
using namespace std;
int sum=1;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='-')sum--;
        if(str[i]=='*')sum*=2;
        if(sum>=2025) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}