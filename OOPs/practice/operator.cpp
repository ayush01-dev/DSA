#include <iostream>
using namespace std;

class fun{
    public:
    int no;

    void operator+(fun &obj){
        int val1 = this->no;
        int val2 = obj.no;
        cout<<"subtraction is "<<(val1-val2)<<endl;
    }
};




int main(){

    fun obj1,obj2;
    obj1.no = 10;
    obj2.no = 5;


    obj1+obj2;



    return 0;
}