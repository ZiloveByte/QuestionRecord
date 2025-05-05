#include <bits/stdc++.h>

struct sugar{
    long long a;
    long long b;
}su[100050];

bool cmp(sugar x,sugar y){
    return x.a-x.b>y.a-y.b;
}

void solve(){
    int n,k;
    std::cin>>n>>k;
    long long cnt=0;
    for(int i=0;i<n;i++) std::cin>>su[i].a;
    for(int i=0;i<n;i++) std::cin>>su[i].b;
    std::sort(su,su+n,cmp);
    for(int i=0;i<k;i++) cnt+=su[i].a;
    for(int i=k;i<n;i++) cnt+=su[i].b;
    std::cout<<cnt;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}