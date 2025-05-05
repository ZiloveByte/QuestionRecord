#include <bits/stdc++.h>
using namespace std;

long long sum[100000];

void solve(){
    int x=0,y=0,temp,k;
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int maxlen=max(a.size(),b.size());
    int carry=0;
    for(int i=0;i<maxlen;i++){
        x=0,y=0;
        int x = (i < a.size()) ? (a[i] - '0') : 0;
        int y = (i < b.size()) ? (b[i] - '0') : 0;
        temp=x+y+carry;
        sum[i]=temp%10;
        carry=temp/10;
    }
    if (carry > 0) { // 处理最高位的进位
        sum[maxlen] = carry;
        maxlen++;
    }
    for(int i=maxlen-1;i>=0;i--){
        cout<<sum[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}