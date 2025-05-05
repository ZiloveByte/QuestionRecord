#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    for(int i=1;i<=n;i++){
        if(st.count(i)==0){
            cout<<i<<"\n";
            return;
        }
    }
    cout<<"-1\n";
}

int main(){
    int _;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}