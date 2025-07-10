#include <iostream>
using namespace std;
class Animal{
    public:
        //state 
        int age;
        string type;

        //behaviour

        void eat(){

        }

        void sleep(){
            
        }

    };

int main(){
    
    //object creation

    //Static
    Animal Ramesh; //ramesh an object of animal type
    Ramesh.age = 20;
    Ramesh.type = "Lion";    // assinging value 
    cout<<"Age of ramesh: "<<Ramesh.age<<endl;
    cout<<"Type of animal: "<<Ramesh.type<<endl;

    //Dynamic
    

    return 0;
}