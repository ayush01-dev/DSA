#include <iostream>
using namespace std;


class a {
    public:
    int data;
    a* next;

    a(){
        this->data = -1;
        this->next = NULL;
    }
};

int main(){


    a* first = new a;
    a* second = new a;
    a* third = new a;

        //printing the address of each node (next)
        cout<<"address of first next "<<first<<endl;
        cout<<"address of second next "<<second<<endl;
        cout<<"address of third next "<<third<<endl;
    //now changing the address of each node 
    first->next = second;   //this line will store address of second into (first ki next pointer mai)
    second->next = third;   //this line will store addres of third into second->next (before that next is storing 0)
            

        
        //now printing the address of next ponters of fist and second
        cout<<endl<<"adderss of first->next :"<<first->next<<endl;
        cout<<"address of second->next :"<<second->next<<endl;






    return  0;
}