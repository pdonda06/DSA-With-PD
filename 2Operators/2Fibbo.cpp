#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 10;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=0;i<=n;i++){
        int NextNum= a+b;
        cout<<NextNum<<" ";
        a=b; //order matters
        b=NextNum;
    }
    return 0;
}