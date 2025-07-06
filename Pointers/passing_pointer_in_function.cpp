#include <iostream>
using namespace std;

void update (int* p){
    // int *p = ptr; we are basically copying pointer 
    //here a pointer p will be created storing address of a or value of ptr
    cout<<"value of p "<<p<<endl;
    cout<<"value of &p "<<&p<<endl;
    cout<<"value of *p "<<*p<<endl;
    //updating
    *p = *p + 10;

}

int main(){
    int a = 5; 
    int* ptr =  &a;

    update(ptr);

    cout<<"value of a is :" << a <<endl;


    return 0;
}