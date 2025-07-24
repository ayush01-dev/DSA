#include <iostream>
using namespace std;
// creation of class

class animal
{
public:
    string name;
    int age;

    // default consturctor
    animal()
    {
        this->age = 0;
        this->name = "";
        cout << "counsturctor being called" << endl;
    }

    // parmeterized consturctor
    animal(int age)
    {
        cout << "paremetrized constructor being called" << endl;
        this->age = age;
    }
    animal(int age, string name)
    {
        cout << "parameterized constructor 2 is being called" << endl;
        this->age = age;
        this->name = name;
    }

    // Copy constructor
    animal(animal &obj)
    {
        this->age = obj.age;
        this->name = obj.name;
        cout << "Iam inside copy consturctor" << endl;
    }
};

int main()
{

    animal zyan;
    animal *a = new animal;

    animal c(45);
    animal *d = new animal(34);
    // BTS - compiler will go to class and find the constuructor having 2 parameters (matching consturctor)
    // and will call that

    animal e(34, "sheru");
    animal *f = new animal(53, "jully");

    // to copy object
    animal x;
    animal y;

    // animal z = x; // two way to copy the object
    // animal p(y);

    animal q = *f; // this will create a copy of f object
    animal w = e;  // this will creae a copy of e object

    return 0;
}