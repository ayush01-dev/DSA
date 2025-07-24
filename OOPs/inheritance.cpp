#include <iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;
    
        void eat(){
            cout<<"eating"<<endl;
        }

};

//Inherit Class
class dog: public animal{

};

int main(){

    dog d1;
    d1.eat();


    return 0;
}