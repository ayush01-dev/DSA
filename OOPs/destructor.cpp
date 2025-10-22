#include <iostream>
using namespace std;

class animal{
    private:
    int weight;
    public:
    string type;

    //setter
    void setweight(int weight){
        this->weight = weight;
    }

    //destructor
    ~animal(){
        cout<<"Iam inside destructor"<<endl;
    }
};
int main(){

    animal a; // obj in static will automatically call destructor to free space when then scope is end

    animal* b = new animal;
    delete b; // in heap we have to do it manually by using delete funtion

    return 0;
}