#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    int num = 1;

    switch(num){
        case 1: switch(ch){
                    case 'a': cout << "Character is " << ch << endl;
                    break;
                }
        break;

        case 2: cout << "Second" <<endl;
        break;

        case '1': cout << "Character one" <<endl;
        break;

        default: cout << "It is default case" <<endl;
    }

    return 0;
}