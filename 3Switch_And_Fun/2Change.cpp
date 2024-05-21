#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter amount: "<<endl;
    cin>>n;

    int r100,r50,r20,r1;

    switch (1)
    {
    case 1: r100 = n/100;
            n=n-(r100*100);
            cout<<r100<<endl;
        
    case 2: r50 = n/50;
            n=n-(r50*50);
            cout<<r50<<endl;

    case 3: r20 = n/20;
            n=n-(r20*20);
            cout<<r20<<endl;
    
    case 4: r1 = n/1;
            n=n-(r1*1);
            cout<<r1<<endl;
    }

    return 0;
}