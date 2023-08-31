#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"Value of n is: "<<n<<endl;

    return 0;
}