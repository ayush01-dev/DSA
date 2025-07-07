#include <iostream>
using namespace std;
void solve(int& value){
    //this is what we call pass by referce 
    //value with diffrent name pointing to same address of b;
    value++;
}
int main(){

    int a = 5; 
    int& b = a;
    // b ia a reference variable pointing to the same memory location of a 
    
    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<a<<endl;
    cout<<b<<endl;

    b++;
    cout<<a<<endl;
    cout<<b<<endl;


    solve(b);
    cout<<"value of b after pass by refrence "<<b;


    return 0;
}