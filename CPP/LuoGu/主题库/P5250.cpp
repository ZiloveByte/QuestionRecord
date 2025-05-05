#include <bits/stdc++.h>
using namespace std;

set<int> st;

void solve(){
    int t,x;
    cin>>t>>x;
    if(t==1){
        if(st.find(x)==st.end()) st.insert(x);
        else cout<<"Already Exist";
    }
    if(t==2){
        if(st.empty()){
            cout<<"Empty\n";
            return;
        }else if(st.find(x)!=st.end()){
            cout<<x<<"\n";
            st.erase(st.find(x));
            return;
        }else {
            set<int>::iterator lwb,l2,l3;
            if (lwb == st.begin()) cout << *lwb<<"\n", st.erase(lwb);
            else if (lwb == st.end()) cout << *(-- l3)<<"\n", st.erase(l3);
            else if (*lwb - t < t - *(-- l2)) cout << *(l3)<<"\n", st.erase(l3);
            else cout << *(-- l3)<<"\n", st.erase(l3);
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}