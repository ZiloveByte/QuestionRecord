#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>p_sum(n+1,0);
    vector<int>cow(n);
    for(int i=0;i<n;i++){
        cin>>cow[i];
        if(i==0)p_sum[i]=cow[i]%7;
        else p_sum[i]=(p_sum[i-1]+cow[i])%7;
    }
    unordered_map<int, int>first;
    int res=0;
    for(int i=0;i<=n;i++){
        int remainder=p_sum[i];
        if(first.find(remainder)==first.end()){
            first[remainder]=i;
        }else {
            res=max(res,i-first[remainder]);
        } 
    }
    cout<<res<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}