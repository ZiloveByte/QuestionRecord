#include <bits/stdc++.h>
using namespace std;
char arr[105][105];
int main() {
    int n,m,count;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(arr[i][j]=='*'){
                cout<<arr[i][j];
                continue;
            }
            count=0;
            if(arr[i-1][j-1]=='*')count++;
            if(arr[i-1][j]=='*')count++;
            if(arr[i-1][j+1]=='*')count++;
            if(arr[i][j-1]=='*')count++;
            if(arr[i][j+1]=='*')count++;
            if(arr[i+1][j-1]=='*')count++;
            if(arr[i+1][j]=='*')count++;
            if(arr[i+1][j+1]=='*')count++;
            cout<<count;
        }
        cout<<endl;
    }
}
