#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: ";
    cout << name << endl;

    name[2] = '\0';
    cout << "Your name is: ";
    cout << name << endl;

    return 0;
}