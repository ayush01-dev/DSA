#include <iostream>
using namespace std;

class animal{

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public animal{

public:
    // function overriding
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main(){


    // animal*a = new animal();
    // a->speak()
    // o/p :- speaking

    // dog*d = new dog();
    // d->speak();
    // o/p :- barking

    // when no vertual function were made in parent class

        // UPCASTING
        animal *x = new dog(); // parent class ka pointer banaya hai or object dog type ka banya hai.
        x->speak();

        // DOWNCASTING
        dog *d = (dog *)new animal();
        d->speak();

        // so when we are using upCasting or DOWNCASTING without virtural keyword
        // ponter class ka funtion call hoga

    return 0;
}