#include <bits/stdc++.h>
using namespace std;


void pyramid(int n){
    for(int i=n;i>0;i--){
        // sapce
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        // stars
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j< n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

int main() {
    int val=0;
    cout<<"enter the size of pyramid"<<endl;
    cin>>val;
    val=val+1;
    pyramid(val);
    
    return 0;
}