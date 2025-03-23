#include <bits/stdc++.h>
using namespace std;

long long n,s,a=1,b,num[100050],cnt[100050];
vector<int>arr[100050];
vector<int>ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<100050;i++){
        for(int k=i;k<100050;k+=i){
            arr[k].push_back(i);
        }
    }
    for(int i=0;i<n;i++){
        cin>>num[i];
        for(int j=0;j<arr[num[i]].size();j++){
            ++cnt[arr[num[i]][j]];
        }
    }
    
    for(int i=1;i<100050;i++){
        if(cnt[i]>=3){
            b=i;
        }
    }
    sort(num,num+n);
    for(int i=0;i<n;i++){
        if(num[i]%b==0){
            ans.push_back(num[i]);
        }
    }
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}