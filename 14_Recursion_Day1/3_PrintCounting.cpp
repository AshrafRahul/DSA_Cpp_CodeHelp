#include<iostream>
using namespace std;

void print(int n){ //tail recursion
    if(n==0) return;

    cout << n << endl;
    print(n-1);
}

void print1(int n){ //head recursion
    if(n==0) return;

    print1(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;
    cout << endl;

    print(n);
    cout << endl;
    print1(n);

    return 0;
}