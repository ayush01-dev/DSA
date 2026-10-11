#include <iostream>
using namespace std;

class A{
    public:
    int x;

};

class B: public A{

};


class C: public A{

};



class D: public B, public C{

};


int main(){
    D obj1;
    cout<<obj1.B::x<<endl;


    //Diamond problem error 
    //cout<<obj1.x<<endl;
    //eror : request for member 'x' is ambiguous


    return 0;
}