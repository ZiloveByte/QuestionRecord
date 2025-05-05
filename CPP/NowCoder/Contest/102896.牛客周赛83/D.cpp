#include <bits/stdc++.h>
using namespace std;
int money[100005];
int main(){
    long long n,k,mark=0,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>money[i];
    }
    for(int i=0;i<k;i++){
        long long x=money[0];
        for(int k=mark+1;k<=mark+6;k++){
            if(x<money[k]){
                x=money[k];
            }
        }
        sum+=x;
        for(int j=mark;j<=mark+6;j++){
            if(x==money[j]){
                mark+=j;
            }
        }
    }
    cout<<sum;
}