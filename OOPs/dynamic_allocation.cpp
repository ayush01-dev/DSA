#include <iostream>
using namespace std;

// creation of class
class animal
{
public:
    // state or properties
    string name;
    int age;
    // behaviour or methods
    void eat()
    {
        cout << "eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
};

int main()
{

    // DYNAMIC ALLCOATION
    animal *eminem = new animal; // here new is a key word for allocating space of object in heap memory

    (*eminem).name = "rabit";
    (*eminem).age = 50;

    // alternative way

    eminem->age = 52; // this way only work for pointers
    eminem->name = "kharghos";

    eminem->eat();
    eminem->sleep();

    return 0;
}