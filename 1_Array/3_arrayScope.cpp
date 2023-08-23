#include<iostream>
using namespace std;

void updateArray(int arr[], int n){
    cout<<endl<<"Inside the function"<<endl;

    arr[0]=120;//updating array
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    cout<<"Going back to main function"<<endl;
}

int main(){
    int arr[3]={1,2,3};

    updateArray(arr,3);

    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    return 0;
}