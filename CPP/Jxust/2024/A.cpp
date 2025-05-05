#include <bits/stdc++.h>
using namespace std;

long long huang[1005],yu[1005],mark[1005];

long long isP(long long x){
    if(x<=1) return 0;
    for(int i=2;i<=(int)sqrt(x);i++){
        if(x%i==0)return 0;
    }
    return 1;
}

int main(){
    long long n;
    cin>>n;
    long long score=0;
    for(int i=1;i<=n;i++)cin>>huang[i];
    for(int i=1;i<=n;i++)cin>>yu[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            long long a=huang[i]+yu[j];
            if(isP(a) && mark[j]==0){
                score++;
                mark[j]=1;
                break;
            }
        }
    }
    cout<<score<<endl;
}
