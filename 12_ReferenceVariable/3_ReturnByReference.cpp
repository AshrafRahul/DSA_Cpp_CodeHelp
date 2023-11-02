#include<iostream>
using namespace std;

/*
Even if you run the code here, it will show a warning.
Because, What type of return? This is not known.
*/

int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}

int main(){
    int n;
    func(n);
    fun(n);

    return 0;
}