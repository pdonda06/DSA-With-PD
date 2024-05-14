#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    // int cnt=1;
    for(int i=1;i<=n;i++){

        //space
        for(int s=i-1;s;s--){
            cout<<" ";
        }

        //num
        for(int j=i;j<=n;j++){
            cout<<j;
            // cout<<cnt;
            // cnt++;
        }
        cout<<endl;
    }
    return 0;
}