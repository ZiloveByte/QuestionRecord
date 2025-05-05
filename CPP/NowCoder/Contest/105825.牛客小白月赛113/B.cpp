#include <bits/stdc++.h> 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0;
    string str;
    cin>>n>>str;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            cnt++;
        }
    }
    if(cnt>=2){
        cout<<"NO"<<endl;
        return 0;
    }else {
        cout<<"YES"<<endl;
        return 0;
    }
}