#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    string name;

    //behaviours
    void eat(){
        cout<<"eating"<<endl;
    }

    void sleep(){
        cout<<"sleeping"<<endl;
    }
};


//inherting animal class into dog class
class dog: public Animal{
    public:
    int weight;


};


int main(){

    dog d1;
    d1.age = 23;
    d1.name = "dazy";
    d1.weight = 23;


    
    return 0;
}