#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase\n";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Lowercase\n";
    }
    else{
        cout<<"Enter valid input\n";
    }
}