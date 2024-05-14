#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int cnt=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A' + i + j - 2;
            cout<<ch<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}