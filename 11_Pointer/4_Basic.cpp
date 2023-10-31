#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,6,8};
    cout << "Address if first memory block is: " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address if first memory block is: " << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr+1 << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << arr[2] << endl << endl;
    
    int i=3;
    cout << i[arr] << endl << endl;

    //
    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl << endl;

    //
    int a[20] = {1,2,3,5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl << endl;

    //
    int ar[10];
    //ar = ar+1; //this is wrong 
    int *pt = &ar[0];
    cout << pt << endl;
    pt = pt + 1;
    cout << pt << endl;


    return 0;
}