#include <iostream>
using namespace std;

class animal
{
public:
    // consturctor
    animal()
    {
        cout << "iam inside animal constructor " << endl;
    }
    int age;

    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public animal
{
public:
    // consturctor
    dog()
    {
        cout << "iam inside dog consturctor " << endl;
    }
};

int main()
{
    // Note:- When we create a obj from child class it will first call Parent class construcutor
    // then its own constructor
    dog c;
    cout << endl;

    animal *a = new animal;

    cout << endl;
    animal *b = new dog;
    // first parent consturctor will be called
    // then child constructor will be called cuz we are creating dog type of constuctor here

    cout << endl;

    dog *d = (dog *)new animal;
    // here only animal constructor will be called cuz we are creating animal type class and it won't depends on any other class

    return 0;
}