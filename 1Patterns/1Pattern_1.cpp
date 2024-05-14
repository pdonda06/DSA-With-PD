#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){ //row
        for(int j = 1;j<=n;j++){ //column
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}