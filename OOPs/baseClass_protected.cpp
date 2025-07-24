#include <iostream>
using namespace std;

//Base class Animal ka access modifier is PROTECTED:
class Animal {
    protected:
        int age;

};

//Mode of inheritance is - public:
class cats1:public Animal{
    public:
    void getage(){
        cout<<age;
    }
};

//Mode of inheritance is - protected
class cats2:protected Animal{
    public:
    void getage(){
        cout<<age;
    }

};


//Mode of inheritance is - private:
class cats3:private Animal{
    public:
    void getage(){
        cout<<age;
    }
};

int main(){
    
    cats1 c1;
    //cout<<"age of c1 "<<c1.age<<endl;  // inaccessible because we can not access protected property in outside of the class
    //so protected property is accessed as proteceted (even if mode of inhirt is public)
    c1.getage();
    cout<<endl;



    cats2 c2;
    //cout<<c2.age; // inaccessible because we can not access protected property in outside of the class
    //so protected property is access as protected
    //so we can use getter
    c2.getage();
    cout<<endl;


    cats3 c3;
    //cout<<c3.age<<endl; //int Animal::age' is inaccessible within this context
    //so protected property is accessed as private 
    //so we can use getter
    c3.getage();


    return 0;
}