#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"enter your age "<<endl && cin>>age;
    if(age>=18){
        cout<<"you are an adult, ready to vote!"<<endl;
    }
    else{
        cout<<"you are just a baby!"<<endl;
    }
    return 0;
}