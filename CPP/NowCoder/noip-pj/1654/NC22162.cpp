#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%7==0){
            sum+=i;
        }
    }
    cout<<sum;
}