#include <iostream>
using namespace std;

class Node{
    public:

    //properties
    int data;
    Node* next;

    //TO DO:- write a distructor to delete a node
    ~Node(){
        cout<<"Node with value : "<<this->data<<" delete "<<endl;
    }


    //consturctor to inistilize node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


int findLength(Node* &head){
    int i = 0;
    Node* temp =  head;
    while(temp != NULL){
        temp = temp->next;
        i++;
    }
    return i;
}
void deletNode(int position, Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"Linked list is empty , can't delete any node"<<endl;
        return;
    }

    //deleting first node
    if(position == 1){
        //step1 creat a temp 
        Node* temp = head;

        //step2 update head
        head = head->next;

        //step3 make temp pointing null
        temp->next = NULL;

        //step4 delete temp
        delete (temp);

        return;

    }



    
    int len = findLength(head);

    //deleting last node
    if(position == len){
        //find prev
        int  i = 1;
        Node* prev = head;
        while( i< position-1){
            prev = prev->next;
            i++;
        }

        //step2 make prev null
        prev->next = NULL;

        //step3 
        Node* temp = tail;

        //step 4 
        tail = prev;

        //step 5
        delete(temp);

        return;
         
    }


    //deleting middel node

    //step1: find prev
    int i = 1;
    Node* prev = head;
    while(i < position-1){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    //step2: LIKN PREV WITH CURRENT NEXT
    prev->next = curr->next;

    //step3: Make curr NULL
    curr->next = NULL;

    //step4: delte curr
    delete (curr);

    

}

//printLL
void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}





int main(){


    //creating a LL
    Node* head = new Node(20);
    Node* second = new Node(40);
    Node* third = new Node(60);
    Node* fourth = new Node(80);
    Node* tail = new Node(100);



    //now linking the LL
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;




    printLL(head);
    cout<<endl;


    cout<<"DELETING HEAD "<<endl;
    deletNode(1, head , tail);
    printLL(head);
    cout<<endl<<"head is "<<head->data<<endl;

    
    cout<<endl<<"DELETING TAIL "<<endl;
    cout<<endl;
    deletNode(4,head,tail);
    printLL(head);
    cout<<endl<<"tail is "<<tail->data<<endl;

    cout<<endl<<"DELETING MIDDLE"<<endl;
    cout<<endl;
    deletNode(2,head,tail);
    printLL(head);
    




    return 0;
}