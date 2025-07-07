#include <iostream>
using namespace std;
int main(){

    int a = 5; 
    int*p = &a;
    int** q = &p;

    cout<<a<<endl; //5
    cout<<p<<endl; //address of a in p
    cout<<*p<<endl; //5
    cout<<&p<<endl; //address of p
    cout<<q<<endl; //addess of p in q
    cout<<&q<<endl; //adddes of q
    cout<<**q<<endl; //5

    return 0;
}