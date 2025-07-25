#include <iostream>
using namespace std;

class maths{
    public:
        int sum (int a , int b){
            cout<<"iam inside first signautre"<<endl;
            return a+b;
        }

        int sum (int a , int b , int c){
            cout<<"iam inside second signautre"<<endl;
            return a+b+c;
        }
        
        int sum (int a, float b){
            cout<<"iam inside third signautre"<<endl;
            return a + b;
        }
};

int main(){

    maths obj;
    cout<<obj.sum(3,5.12f)<<endl;
    cout<<obj.sum(3,5)<<endl;
    cout<<obj.sum(100,5,3)<<endl;
    return 0;
}