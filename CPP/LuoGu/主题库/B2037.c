#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    if ( 1 == (int)fabs(n) % 2 ){
        printf("odd");
    }else{
        printf("even");
    }
}