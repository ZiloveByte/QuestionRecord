#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    int cnt=0;
    cnt=st.size();
    cout<<cnt<<"\n";
    for(auto elo : st){
        cout<<elo<<" ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}