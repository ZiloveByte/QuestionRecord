#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
    int N,mi=100005,mx=0,temp,a,b;
    cin>>N;
    while (cin>>temp){
        arr[temp]=arr[temp]+1;
        mi=min(temp,mi);
        mx=max(temp,mx);
    }
    for(int i=mi;i<mx;i++){
        if(arr[i]==0)a=i;
        if(arr[i]==2)b=i;
    }
    cout<<a<<' '<<b;
}