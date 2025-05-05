#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q,x,t,mark=1,temp;
    cin>>q;
    vector<long long> arr;
    while(q--){
        cin>>t;
        temp=0;
        for(int k=0;k<t;k++){
            cin>>x;
            if(temp>=x){
                cout<<"NO\n";
                return;
            }
            temp=x;
            arr.push_back(x);
        }
    }
    sort(arr.begin(),arr.end());
    int len=arr.size();
    for(int i=1;i<len;i++){
        if(!(arr[i]-arr[i-1]==1)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}