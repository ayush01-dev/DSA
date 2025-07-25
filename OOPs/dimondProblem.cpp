#include <iostream>
using namespace std;

class A{
    public:
        int chemistry = 05;

};

class B{
    public:
        int chemistry = 10;


};


class C: public A, public B{

};

//dimond problem: scope resolution operator
int main(){

    C obj;
    cout<<"chemistry from A class iherit hue hai jo "<<obj.A::chemistry<<endl;
    cout<<"chemistry from B class iherit hue hai jo "<<obj.B::chemistry<<endl;

    return 0;
}