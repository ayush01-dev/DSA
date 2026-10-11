#include <iostream>
using namespace std;



class A{
    public:
    int x;

    A(){
        cout<<"iam inside base class conturctor"<<endl;
    }

    ~A(){
        cout<<"iam insider base class desturctor "<<endl;
    }


};


class B: public A{
    public:
    int y;

    B(){
        cout<<"iam inside  DERIVED class conturctor"<<endl;
    }

    ~B(){
        cout<<"iam inside DERIVED  class desturctor "<<endl;
    }


};


int main(){
    

    B *obj2 = new B;
    delete obj2;


    //NOTE:-

    //Base class constructor - first;
    //Derived class consturcto - after;
    //(reverse order for destructor )

    return 0;
}