#include<stdio.h>
int main(){
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = 1 / (1 / a + 1 / b);
    printf("%.2lf", c);
    return 0;
}