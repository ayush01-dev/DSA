#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

bool checkForLoop(Node* &head){
    if(head == NULL){
        //LL is empty 
        return false;
    }

    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == slow){
            // loop is present
            return true;
        }
    }
    return false;
}


void printLL(Node* &head){
    Node* temp = head;
    while(temp !=  NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eight = new Node(80);
    Node* ninth = new Node(90);



    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next = ninth;
    ninth->next = fifth;  // looping ninth with fifth;


    
    Node* head  = first;
    


    cout<<"Loop is present or not :"<<checkForLoop(head)<<endl;


    return 0;
}