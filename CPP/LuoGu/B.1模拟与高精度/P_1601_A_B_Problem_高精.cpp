#include <bits/stdc++.h>
using namespace std;
long long sum[1000000];
int main(){
    int x=0,y=0,temp,carry=0;
    string a,b,c;
    cin>>a>>b;
    int lens1=a.size(),lens2=b.size(),maxlen=max(lens1,lens2);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<maxlen;i++){
        int x = (i < a.size()) ? (a[i] - '0') : 0;
        int y = (i < b.size()) ? (b[i] - '0') : 0;
        temp=x+y+carry;
        sum[i]=temp%10;
        carry=temp/10;
    }
    if (carry > 0){
        sum[maxlen]=carry;
        maxlen++;
    }
    for(int i=maxlen-1;i>=0;i--){
        cout<<sum[i];
    }
}