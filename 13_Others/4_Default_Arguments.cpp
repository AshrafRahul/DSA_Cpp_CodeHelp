#include<iostream>
using namespace std;

void print(int arr[], int n, int start=0){
    for(int i=start; i<n; i++){
        cout << arr[i] << endl;
    }
}

void print1(int arr[], int n, int start=1){
    for(int i=start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size); //1 4 7 8 9
    cout << endl;
    print(arr, size, 2); //7 8 9
    cout << endl << endl;

    print1(arr, size); //4 7 8 9
    cout << endl;
    print1(arr, size, 2); //7 8 9

    return 0;
}