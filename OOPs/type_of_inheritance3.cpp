#include <iostream>
using namespace std;

//parent class
class car{
    public:
        int age;
        int weight;

        void speedUP(){
            cout<<"speedUp"<<endl;
        }

        void Breakmaro(){
            cout<<"breakmardi"<<endl;
        }
};

//child1
class scorpio:public car{

};

//child2
class fourtuner:public car{

};


int main(){

    scorpio s11;
    cout<<s11.age<<endl;
    s11.speedUP();


    fourtuner f11;
    cout<<f11.weight<<endl;
    f11.Breakmaro();

    return 0;
}