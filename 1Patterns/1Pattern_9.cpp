#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        // int val =i;
        for(int j=1;j<=i;j++){
            // cout<<val<<" ";
            cout<<i+j-1<<" ";
            // val++;
        }
        cout<<endl;
    }
    return 0;
}