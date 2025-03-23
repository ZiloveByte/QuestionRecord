#include <bits/stdc++.h>
const long long Mod=1e9+7,x=1e5+10;
using namespace std;
int main(){
	long long N,Ma,Mb,w=1,t;
	long long ans=0;
	long long Maa[x],Mbb[x];
	cin>>N;
	cin>>Ma;
	for(long long i=Ma;i>=1;i--)cin>>Maa[i];
	cin>>Mb;
	for(long long i=Mb;i>=1;i--)cin>>Mbb[i];
	for(long long i=1;i<=max(Ma,Mb);i++){
		t=max(max(Maa[i],Mbb[i])+(long long)1,(long long)2);
		ans=(ans+(Maa[i]-Mbb[i])*w)%Mod;
		w=(w*t)%Mod;
	}
	cout<<(ans+Mod)%Mod;
}
