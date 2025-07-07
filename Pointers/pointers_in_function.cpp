#include <iostream>
using namespace std;
void util(int* p ){

    //this thing will create a new copy of pointer 
    // p = p +1;
    *p = *p +1;
}

int main(){
     
    int a = 5; 
    int *p = &a;

    cout<<endl<<"BEFORE"<<endl;
    cout<<"value inside a "<<a<<endl;
    cout<<"address of a "<<&a<<endl;
    cout<<"address inside p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;
    cout<<"value p is pointing "<<*p<<endl;

    util(p);

    cout<<endl<<endl<<"AFTER"<<endl;


    cout<<endl<<"BEFORE"<<endl;
    cout<<"value inside a "<<a<<endl;
    cout<<"address of a "<<&a<<endl;
    cout<<"address inside p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;
    cout<<"value p is pointing "<<*p<<endl;

    return 0;
}