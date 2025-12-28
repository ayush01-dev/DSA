#include <iostream>
using namespace std;

class stack{
    public:
     int *arr;
     int size;
     int top1;
     int top2;


    stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
     

};


int main(){


    return 0;
}