#include <iostream>
using namespace std;
 
class animal {
private:
int weight;
//behaviour

public:
//setter 

void setter (int weight){
   this -> weight = weight; // so here  we have use this keyword 
                            // which is pointer to current object
}

int getter (){
    return weight;
}

};

int main(){
    animal ravi;
    ravi.setter(35);
    cout<<"age of ravi is "<<ravi.getter();
    

    return 0;
}