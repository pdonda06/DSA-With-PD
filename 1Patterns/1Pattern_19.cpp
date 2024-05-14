#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     // for(int space = n-i;;space--){
    //     //     cout<<" ";
    //     // }
    //     for(int j=1;j<=i;j++){
    //         if()
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i = n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}