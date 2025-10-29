#include <iostream>
using namespace std;

class nudes {
    public:
    int data;
    nudes* next;

    nudes(int data){
        this-> data =  data;
        this-> next = NULL;
    }

};


//creating a print function for linked list

void print(nudes* &head){
    nudes* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    //creating multiple nudes in head
    nudes* first = new nudes(3);   // [3|NULL]
    nudes* second = new nudes(1);   //  [1|NULL]
    nudes* third = new nudes(4);
    nudes* fourth = new nudes(1);
    nudes* fifth = new nudes(5);
    nudes* sixth = new nudes(9);


    //Now linking all the  nodes

    first->next = second;  //  [3|address of second]
    second->next = third;   //  [1| address of third]
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    print(first);


    return 0;
}