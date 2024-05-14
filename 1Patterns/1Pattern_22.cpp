#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int s=n-i;s;s--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}