#include <iostream>
using namespace std;
class Animal{
    private:
        int weight;

    public: // access modifires

        //state 
        int age;
        string type;

        //behaviour

        void eat(){
            cout<<"eating";
        }

        void sleep(){
            cout<<"sleeping";
        }

        //getter 
        int getweight(){
            return weight;
        }
        
        //setter
        void setweight(int w){
            weight = w;
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

    Ramesh.setweight(123);
    Ramesh.eat();
    cout<<endl;
    Ramesh.sleep();
    cout <<  endl << "Weight of ramesh is : " << Ramesh.getweight() << endl;


    //Getters and Setters to access private member

    //Dynamic
    

    return 0;
}