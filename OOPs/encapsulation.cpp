#include <iostream>
using namespace std;


//encapsulation (is hiding data or wraping data members)
class animal {
    public:
        int age;
        string type;

    void eat(){
        cout<<"eating"<<endl;
    }
};


//perfact encapsulation (where all the data members are private)
class car {
    private:
        int number;
        string modle;
    
    public:
        void drive(){
            cout<<"driving"<<endl;
        }
};


int main(){

    animal tiger;
    car* bmw = new car;


    return 0;
}