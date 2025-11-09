#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    //default constructor
    Node(){
        this->data = -1;
        this->next = NULL;
        this->prev = NULL;
    }


    //parameterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        cout<<"Node with value: "<<this->data<<" deleted "<<endl;
    }




};

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAthead(int data, Node* &head, Node* &tail){
    if(head == NULL){
        //empty case
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        
    }

    else{
        //non empty case
        
        //step1:create a new node
        Node* newNode =  new Node(data);
        //step2: link newNode to head
        newNode->next = head;
        //step3: link head prev to temp
        head->prev = newNode;
        //step4: update head
        head = newNode;
    }
}

void insertAtTail(int data, Node* &head, Node* &tail){
    if(head == NULL ){
        //empty case means LL is empty 
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else{
        //non empty case

        //Step01:create a new ll
        Node* new_node = new Node(data);

        //step2:
        tail->next = new_node;
        //step3:
        new_node->prev = tail;
        //step4:
        tail = new_node;

    }
}


void insertAtPostion(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        //LL is empty 
        Node* temp = new Node(data);
        head = temp;
        tail = temp;

    }
    else {
        //LL is non empty 
        if(position == 1){
            insertAthead(data, head, tail);
            return;
        }

        int len = getLength(head);
        if(position > len){
            insertAtTail(data,head,tail);
            return;
        }

        //insert at middle

        //find prev and curr
        int i = 1;
        Node* prevNode = head;
        while(i < position-1){
            prevNode = prevNode -> next;
            i++;
        }

        Node* curr = prevNode->next;

        //step 1:
        Node* newNode = new Node(data);
        //step 2:
        prevNode->next = newNode;
        //step 3:
        newNode->prev = prevNode;
        //step 4:
        newNode->next = curr;
        //step 5:
        curr->prev = newNode;

    }
}


void deletefromPostion(Node* &head, Node* &tail, int position){
    if(head == NULL){
        //LL is emtpy
        cout<<" LL is empty no node can be deleted"<<endl;
        return;

    }
    if(head->next == NULL){
        //means LL having one node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }


    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);

    if(len == position){
        //deletion last node
        Node* temp = tail;
        tail = tail->prev;
        temp -> prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }


    //delete from middle of LL

    //step1: find left ,curr,right

    int i = 1;
    Node* left = head;
    while(i < position -1){
        left = left->next;
        i++;
    }

    Node* curr = left->next;
    Node* right = curr->next;


    //step2: 
    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;





}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;


    first->next = second;
    second->prev = first; 

 
    second->next = third;
    third->prev = second;

    printLL(head);


    insertAthead(101,head,tail);
    
    cout<<endl;
    printLL(head);



    insertAtTail(99,head,tail);
    cout<<endl;
    printLL(head);




   

    insertAtPostion(head,tail,999,1);
    cout<<endl;
    printLL(head);


    insertAtPostion(head,tail,28,4);
    cout<<endl;
    printLL(head);
    cout<<endl;



    deletefromPostion(head,tail,1);
    printLL(head);
    cout<<endl;

    deletefromPostion(head,tail,6);
    printLL(head);
    cout<<endl;

    deletefromPostion(head,tail,3);
    printLL(head);
    cout<<endl;
    

    return 0;
}
