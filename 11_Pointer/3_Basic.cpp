#include<iostream>
using namespace std;

int main(){
    int num=5;
    int a=num;
    cout << "a Before: " << num << endl;
    a++;
    cout << "a After: " << num << endl;

    int *p = &num;
    cout << "Before: " << num << endl;

    (*p)++;
    cout << "After: " << num << endl;    

    //copying a pointer
    int *q=p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    //important concept
    int i=3;
    int *t = &i;

    *t = *t+1;
    cout << *t << endl;
    cout << "before t: " << t << endl;
    t = t+1;
    cout << "after t: " << t << endl;

    return 0;
}