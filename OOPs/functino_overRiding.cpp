#include <iostream>
using namespace std;

class animal
{
public:
    void speaking()
    {
        cout << "speaking";
    }
};

class dog : public animal
{
public:
    void speaking()
    {
        cout << "barking";
    }
    // this is what we call funtion overriding
    // changing the function implemention on drived class
    // it plays i imp role when we want a custom output for diffrent childs
    // just like example of (shape parent class having area method , then changing method for each of its child)
    //(like for triangle , square , cirle area is diffrent)
};
int main()
{

    dog d1;
    d1.speaking();
    return 0;
}