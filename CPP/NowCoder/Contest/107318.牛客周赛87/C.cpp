#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long cnt=0;
    int n;
    string s;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            if(a[i]>=0) a[i]=(-1),cnt++;
        }else if(s[i]=='>'){
            if(a[i]<=0) a[i]=1,cnt++;
        }else{
            if(a[i]*a[i-1]<=0) a[i]=a[i-1],cnt++;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}