#include <bits/stdc++.h> 
using namespace std;

bool HaoShu(long long x){
    int weishu=0,a;
    do{
        a=x%10;
        x/=10;
        weishu++;
        if(a%2==weishu%2){
            continue;
        }else{
            return false;
        }
    }while (x>0);
    return true;
}

int main(){
    int N,count=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(HaoShu(i)) count++;
    }
    cout<<count<<endl;
}