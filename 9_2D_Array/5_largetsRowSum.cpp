#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[][4], int row, int col){
    cout << "Printing Sum: " << endl;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    } cout << endl;
}

int largestRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return row;
}

int main(){
    int arr[3][4];

    cout << "Enter the elements: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    printSum(arr, 3, 4);

    int ansIndex = largestRowSum(arr, 3, 4);
    cout << "Maximum row is ar index: " << ansIndex <<endl;

    return 0;
}