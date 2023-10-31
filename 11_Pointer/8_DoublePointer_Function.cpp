#include<iostream>
using namespace std;

void update1(int** p2){
    p2 = p2 + 1; // no change
}

void update2(int** p2){
    *p2 = *p2 + 1;
}

void update3(int** p2){
    **p2 = **p2 + 1;
}

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update1(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl << endl;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update2(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl << endl;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update3(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl << endl;

    return 0;
}