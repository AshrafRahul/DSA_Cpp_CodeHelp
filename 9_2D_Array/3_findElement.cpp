#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
    for(int n=0; n<3; n++){
        for(int m=0; m<4; m++){
            if(arr[n][m] == target) return 1;
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    //taking input -> row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    //print 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    cout << "Enter the element to find: ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "found" << endl;
    } else{
        cout << "Not found" << endl;
    }

    return 0;
}