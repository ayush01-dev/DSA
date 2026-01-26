#include <iostream>
using namespace std;


class complex {
    private:
    int real, img;
    public:
    complex(int r = 0, int i = 0){
        this->real = r;
        this->img = i;
    }
    
    //fuction declearion
    friend complex operator+ (complex &c1, complex &c2);

    void show(){
        cout<<"imaginary no is "<<real<<"+"<<img<<"i"<<endl;
    }

};

//fuction definatino
complex operator+ (complex &c1, complex &c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;


    return temp;    
}

int main(){
    complex c1(3,4);
    complex c2 (5,6);

    complex c3 = c1+c2;

    c3.show();

    return 0;
}