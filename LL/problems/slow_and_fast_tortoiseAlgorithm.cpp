/*""Use""" two pointer approach slow and fast.
Slow takes one step and fast takes two steps.
for example if a fast person cover 10km then slow person covers its half of the distance.
So when the fast pointer reaches to the last node then slow pointer reaches to the middle of the linked list.
and at last return slow that is the middle node. That's All. Easy Peasy! Happy Coding */



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

Node* findMiddleNode(Node* &head){
    if(head == NULL){
        //LL is empty
        return head;
    }

    if(head->next == NULL){
        //LL has only one node
        return head;       
    }

    //LL has >1 nodes

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    
    }
    return slow;


}



void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp -> next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);



    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth; 


    printLL(head);
    cout<<endl;
    cout<<"middle element is "<<findMiddleNode(head)->data<<endl;


    return 0;
}