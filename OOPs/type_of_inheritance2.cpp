#include <iostream>
using namespace std;

//multiple inheritacne

//(having two partent class and one child class)



//parent1
class A{
    public:
        int physics;
};


//parent2
class B{
    public:
        int chemistry;
};


//child of A and B   
class C: public A, public B{
    public:
        int maths;
};


int main(){

    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<" "<<endl;


    return 0;
}