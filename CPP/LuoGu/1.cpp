#include <iostream>
using namespace std;
int main(){
    int sum=0,count=1;
    while(count<=100){
        sum=sum+count;
        count=count+1;
    }
    printf("%d",sum);
}