#include <stdio.h>
int main(){
    char a,b,c;
    scanf("%c",&b);
    b-='a';
    a=(b+25)%26+'a';
    c=(b+27)%26+'a';
    printf("%c %c",a,c);
}