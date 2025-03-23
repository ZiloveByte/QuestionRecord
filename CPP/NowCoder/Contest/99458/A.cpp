#include <bits/stdc++.h>
using namespace std;

int main() {
    int c[7];
    for (int i=0;i<7;++i){
        cin>>c[i];
    }
    int m_c = *min_element(begin(c),begin(c)+7);
    cout<<m_c<<endl;
    return 0;
}