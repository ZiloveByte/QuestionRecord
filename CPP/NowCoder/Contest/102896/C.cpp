#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    long long x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if(x/10==0){
            cout<<11<<endl;
        }
        if(x/10>0&&x/10<10){
            cout<<101<<endl;
        }
        if(x/10>=10&&x/10<100){
            cout<<1001<<endl;
        }
        if(x/10>=100&&x/10<1000){
            cout<<10001<<endl;
        }
        if(x/10>=1000&&x/10<10000){
            cout<<100001<<endl;
        }
        if(x/10>=10000&&x/10<100000){
            cout<<1000001<<endl;
        }
        if(x/10>=100000&&x/10<1000000){
            cout<<10000001<<endl;
        }
        if(x/10>=1000000&&x/10<10000000){
            cout<<100000001<<endl;
        }
        if(x/10>=10000000&&x/10<100000000){
            cout<<1000000001<<endl;
        }
        if(x/10>=100000000&&x/10<1000000000){
            cout<<10000000001<<endl;
        }

    }
}