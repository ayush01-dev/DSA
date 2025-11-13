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

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
        
    }
    return len;
}


Node* reverseKgroups(Node* &head, int k ){
    if(head == NULL){
        //empty LL
        return head;
    }
    
    int len = getLength(head);
    if(k > len){
        //k is greater then len
        return head;
    }

        // k <= len

    //STEP A: reverse K groups
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 1;     //i you want to set count = 0 then, 
    while(count <= k){ // change condition to (count < k)  
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
        count++;
    }


    //STEP B: recursive call
    if(forward != NULL){
        //we still have nodes to reverse
        head->next = reverseKgroups(forward,k);
    }

    //STEP C: return to head of LL
    return prev;



}


void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}

int main(){
    Node* first = new Node(15);
    Node* second = new Node(25);
    Node* third = new Node(35);
    Node* fourth = new Node(45);
    Node* fifth = new Node(55);
    Node* sixth = new Node(65);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    Node* head = first;


    printLL(head);

    head = reverseKgroups(head,2);
    cout<<endl;
    printLL(head);


    return 0;
}