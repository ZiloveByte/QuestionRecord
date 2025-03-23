#include <stdio.h>
int mypow(int x,int n){
    int a;
    a=x;
    for(int i=1;i<n;i++){
        x*=a;
    }
    return x;
}
int main(){
    int x,n;
    x=2,n=2;
    printf("%d",mypow(x,n));
}