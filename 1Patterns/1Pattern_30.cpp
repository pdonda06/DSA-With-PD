#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        // int cnt=1;
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }

        for(int k=i-1;k;k--){
            cout<<"**";
        }

        for(int cnt=n-i+1;cnt;cnt--){
            cout<<cnt;
        }
    cout<<endl;

    }
    return 0;
}