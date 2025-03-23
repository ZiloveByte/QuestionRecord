#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num){
    if(num<2) return true;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
}