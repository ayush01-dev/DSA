#include <iostream>
using namespace std;

//Single level inheritance (where only one parnet and one child)

//multi level inheritacne (multiple relations)

//parent
class fruit {
    public:
        int weight;
};

//child
class Mango:public fruit{
    public:
        int age;
};


//child ka child
class Alphanso:public Mango{
    public:
        int sweetness;
};


int main(){

    Alphanso a;
    cout<<a.age<<endl;
    cout<<a.weight<<endl;
    cout<<a.sweetness<<endl;

    return 0;
}