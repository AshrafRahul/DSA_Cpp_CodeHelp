#include<iostream>
#include<vector>

using namespace std;
int main(){
    cout<<endl;

    vector<int> v;

    vector<int> a(5,1);
    cout<<"Printing a:"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> a_copy(a);
    cout<<"Printing a_copy:"<<endl;
    for(int i:a_copy){
        cout<<i<<" ";
    }cout<<endl<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl<<endl;

    cout<<"Element at 2nd index: "<<v.at(1)<<endl;

    cout<<"First(front) element :"<<v.front()<<endl;
    cout<<"Last(back) element :"<<v.back()<<endl<<endl;

    cout<<"Before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl<<endl;

    cout<<"Before clear size: "<< v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl<<endl;


    cout<<endl;
    return 0;
}