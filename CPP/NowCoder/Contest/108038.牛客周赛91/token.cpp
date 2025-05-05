#include <bits/stdc++.h>
using namespace std;
long long a[100050];
void solve(){
    long long n,sum=0,x,temp=0;
    cin>>n;
    for(int i=10;i<n+10;i++) cin>>a[i];
    for(int i=10;i<n+10;i++){
        for(int j=i;j>i-10;j--){
            temp+=a[j];
        }
        sum=max(sum,temp);
        temp=0;
    }
    cout<<sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
