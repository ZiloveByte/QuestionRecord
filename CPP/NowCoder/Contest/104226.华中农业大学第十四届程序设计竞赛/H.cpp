#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,res=0;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    unordered_map<int, int> count_a, count_b;
    for (int num:a) count_a[num]++;
    for (int num:b) count_b[num]++;
    for (auto& [num, cnt]:count_a){
        res+=(long long)cnt*(cnt-1)/2;
    }
    for (auto& [num, cnt]:count_b){
        res+=(long long)cnt*(cnt-1)/2;
    }
    map<pair<int,int>,int> count_ab;
    for (int i=0;i<n;i++){
        count_ab[{a[i], b[i]}]++;
    }
    for (auto& [p, cnt]:count_ab){
        res-=(long long)cnt*(cnt-1)/2;
    }

    cout<<res<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}