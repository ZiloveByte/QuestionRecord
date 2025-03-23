#include <bits/stdc++.h>
using namespace std;
int n,a[200000],b=0,dot,clength;
string c;
int main(){
    cin>>n>>c;
    reverse(c.begin(),c.end());
    dot=c.find('.');
    c.erase(dot,1);
    clength=c.length();
    for(int i=0;i<clength;i++){
        a[i+1]=c[i]-'0';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=clength;j++){
            a[j]*=2;
        }
        for(int j=1;j<=clength;j++){
            if(a[j]>=10){
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }
        }
        if(a[clength+1])clength++;
    }
    if(a[dot]>=5){
        a[dot+1]++;
    }
    for(int j=1;j<=clength;j++){
        if(a[j]>=10){
            b=a[j]/10;
            a[j]%=10;
            a[j+1]+=b;
        }
    }
    for(int i=clength;i>dot;i--){
        cout<<a[i];
    }
}