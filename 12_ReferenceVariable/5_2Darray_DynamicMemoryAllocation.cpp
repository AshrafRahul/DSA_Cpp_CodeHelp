//here, row and column size are same
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int** arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    //taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    //displaying output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}