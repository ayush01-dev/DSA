#include <iostream>
using namespace std;

int main (){

    //knowing pointers
    int a = 5;
    int b = 5;

    cout<<&a<<endl;
    cout<<&b<<endl;

    //creating a pointer 
    int *ptr = &a;

    //exessing value and address

    cout<<"address ptr is storing "<<ptr<<endl; // print address stored in ptr
    cout<<"value ptr is pointing at "<<*ptr<<endl; // value at, address/loction stored in ptr
    cout<<"address of ptr "<<&ptr<<endl; // will print the address of ptr vaiable

    return 0;
}