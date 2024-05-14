#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        //space
        for(int s=i-1;s;s--){
            cout<<" ";
        }

        //*
        for(int j=1;j<=n-i+1;j++){
            cout<<i<<"";
        }
        cout<<endl;
    }
    return 0;
}