#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    do{
        if(a[0]>a[1]&&a[1]<a[2]){
            cout<<a[0]<<" "<<a[1]<<" "<<a[2];
            return 0;
        }
    }while(next_permutation(a,a+3));
    cout<<"-1";
    return 0;
}