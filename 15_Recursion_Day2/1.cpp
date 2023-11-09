#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout << "Source: " << src << ", Destination: " << dest << endl;

    //base case
    if(src == dest){
        cout << endl << "Reached home" << endl << endl;
        return;
    }

    //processing - increase one step
    src++;

    //recursive call
    reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(src, dest);

    return 0;
}