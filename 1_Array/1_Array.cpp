#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int num[15]={0};
    printArray(num,15);

    int numSize = sizeof(num)/sizeof(int);
    cout<<endl<<numSize<<endl;

    return 0;
}