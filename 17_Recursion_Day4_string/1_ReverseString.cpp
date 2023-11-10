#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){
    cout << "Call receive for: " << str << endl;
    //base case
    if(i > j) return;

    swap(str[i], str[j]);
    i++;
    j--;

    //recursive call
    reverse(str, i, j);
}

int main(){
    string name = "abcdefghijklmnopqrstuvwxyz";
    cout << endl;

    reverse(name, 0, name.length()-1);

    cout << endl;
    cout << name << endl << endl;

    return 0;
}