#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int>xj;

void solve(){
    int x;
    string name;
    long long score;
    cin>>x;
    if(x==1){
        cin>>name;
        cin>>score;
        xj[name]=score;
        cout<<"OK\n";
    }else if(x==2){
        cin>>name;
        if(xj.find(name)!=xj.end()){
            cout<<xj[name]<<"\n";
        }else cout<<"Not found\n";
    }else if(x==3){
        cin>>name;
        if(xj.find(name)!=xj.end()){
            xj.erase(name);
            cout<<"Deleted successfully\n";
        }else cout<<"Not found\n";
    }else if(x==4){
        cout<<xj.size()<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) solve();
    return 0;
}