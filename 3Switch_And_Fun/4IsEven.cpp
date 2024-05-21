#include<bits/stdc++.h>
using namespace std;

bool isEven(int n){
    //odd
    if(n&1){
        return 0;}

    //even
    return 1;
}
int main(){
    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}