#include <bits/stdc++.h>
using namespace std;
int main(){
    const long long n=23333333;
    const double check=11625907.5798;
    long long s;
    double HS,p0,p1,h0,h1;
    for(int num0=0;num0<=n;num0++){
        int num1=n-num0;
        p0=1.0*num0/n;
        p1=1.0*num1/n;
        h0=-num0*p0*log2(p0);
        h1=-num1*p1*log2(p1);
        HS=h0+h1;
        if(fabs(HS-check)<1e-4){
            cout<<num0<<" "<<num1;
            break;
        }
    }
}