#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,o_high=0;
	cin>>n;
	for(int i=1;i<=n/2;i++){
		cout<<abs(n-i)*2<<endl;
	}
	if(n%2==1)cout<<ceil(n/2)*2<<endl;
	for(int i=n/2;i>=1;i--){
		cout<<abs(i-n)*2<<endl;
	}
}
