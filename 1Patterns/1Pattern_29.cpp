#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        //space
        for(int s=n-i;s;s--){
            cout<<" ";
        }

        //1st
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // cout<<endl;

        //2nd
        for(int k=i-1;k;k--){
            cout<<k;
        }
        cout<<endl;


    }
    return 0;
}