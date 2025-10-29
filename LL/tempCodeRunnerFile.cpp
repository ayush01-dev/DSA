#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    //createing contructor

    Node(){
        this->data = -1;
        this->next = NULL;
    };

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void printNode(Node* &node_name){
    cout<<"data of this "<<node_name->data<<endl;

}

int main(){

    Node* head = new Node(10);
    cout<<"data of this "<<head->data<<endl;

    //printNode(head);

    return 0;
}