#include<bits/stdc++.h>
using namespace std;


int main(){
    // If this code will not run properly in your code editor, then use online compiler

    int n;
    cin>>n;

    int i=0;
    int ans =0;

    while(n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }

    cout<<ans<<endl;
    return 0;
}