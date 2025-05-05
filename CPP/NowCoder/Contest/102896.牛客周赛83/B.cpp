#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    long long n;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n;
        int x=1;
        for(int j=0;j<n;j++){
            if(j%2==0)cout<<1<<" ";
            if(j%2==1)cout<<2<<" ";
        }
        cout<<endl;
    }
}