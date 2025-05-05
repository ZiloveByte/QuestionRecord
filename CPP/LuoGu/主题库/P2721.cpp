#include <bits/stdc++.h>
using namespace std;
const int month[]={0,0,31,59,90,120,151,181,212,243,273,304,334,365};
double dp[400]={100000},a[10010];
int n,startday[10010],endday[10010],o,p,d;
double c;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%02d%02d%d%lf",&o,&p,&d,&c);
        a[i]=c*0.01*(d/365.0)+1; //收益率
        startday[i]=month[o]+p; //开始日期
        endday[i]=startday[i]+d-1; //结束日期
    }
    for(int i=1;i<=365;i++){ //1-365遍历
        dp[i]=dp[i-1];  //递归
        for(int j=1;j<=n;j++) {  //判断所有产品
            if(endday[j]!=i) continue;  //最后一天除外
            dp[i]=max(dp[i],dp[startday[j]-1]*a[j]); //判断
        }
    }
    printf("%.2lf",dp[365]); //输出
    return 0;
}