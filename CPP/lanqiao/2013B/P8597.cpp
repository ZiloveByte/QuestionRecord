#include <bits/stdc++.h>
using namespace std;

int main(){
    string chushi,mubiao;
    char temp;
    int mark=0;
    cin>>chushi>>mubiao;
    for(int i=0;i<chushi.length()-1;i++){
        if(chushi[i]!=mubiao[i]){
            chushi[i+1]=chushi[i+1]=='*'?'o':'*';
            mark++;
        }else continue;
        if(chushi==mubiao) break;
    }
    cout<<mark<<endl;
}