#include <iostream>
using namespace std;

//Base class Animal ka access modifier is PRIVATE:
class Animal {
    private:
        int age;

};

//Mode of inheritance is - public:
class cats1:public Animal{

};

//Mode of inheritance is - protected
class cats2:protected Animal{
    public:
    /*void getage(){
        cout<<age;
    }*/

};


//Mode of inheritance is - private:
class cats3:private Animal{
    public:
    /*void getage(){
        cout<<age;
    }*/
};

int main(){
    
    cats1 c1;
    

    cats2 c2;
   

    cats3 c3;
    
    //private property can not be accessible


    return 0;
}


    

