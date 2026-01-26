#include <iostream>
using namespace std;

class box {
    public:
    int lenght ;

    box(int x){
        this->lenght = x;
    }

    box operator+ (box& b){
        box temp(0);
        temp.lenght = this->lenght + b.lenght;
        return temp;
    }


    void show (){
        cout<<"lenght is "<<lenght<<endl;
    }


};

int main(){

    box b1(10);
    box b2(20);

    box b3 = b1+b2;
    b3.show();


    return 0;
}