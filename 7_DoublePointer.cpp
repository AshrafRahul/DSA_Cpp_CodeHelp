#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << "Printing p: " << p << endl; //priting address of i
    cout << "Address of p: " << &p << endl; //priting address of p
    cout << "Value of p: " << *p << endl; //priting value of i
    cout << p2 << endl; //printing address of p
    cout << *p2 << endl; //printing address of i
    cout << **p2 << endl; //printing value of i
    
    return 0;
}