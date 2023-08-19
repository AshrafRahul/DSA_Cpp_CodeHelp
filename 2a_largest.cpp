#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    if(n1>n2){
        cout<<"Number1 is larger"<<endl;
    }
    else if(n1<n2){
        cout<<"Numbe2 is larger"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }

}