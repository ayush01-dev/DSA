#include <iostream>
using namespace std;

class pram{
    public:
        int value;

        void operator+(pram& obj2){
            int value1 = this->value;
            int value2 = obj2.value;
            cout<<  (value2-value1) <<endl;
        }
};


int main(){

    pram object1, object2;
    object1.value = 10;
    object2.value = 22;

    //object1+object2; compiler don't know about +


    //this: should work as substraction
     object1+object2;

        //object1 - as a current object
        //+ = as a funtion call
        //ojbect2 = as a input parameter

    //so here + operator is existing in multiple form 

    return 0;
}