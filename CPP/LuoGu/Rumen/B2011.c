#include<stdio.h>
main(){
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = a / b;
    printf("%.9lf",c);
    return 0;
}