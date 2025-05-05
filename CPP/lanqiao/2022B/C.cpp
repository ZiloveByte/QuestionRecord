#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,n,cnt=0;
  cin>>a>>b>>n;
  int mark=1;
  while(n>0){
    if(mark<=5&&mark>=1)n-=a,cnt++;
    if(mark<=7&&mark>=6)n-=b,cnt++;
    mark++;
    if(mark==8) mark=1;
  }
  cout<<cnt;
  return 0;
}