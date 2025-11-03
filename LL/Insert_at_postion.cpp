#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor 
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//insert at head function 
void insertAtHead(node* &head, node* &tail, int data){
    //check if LL is empty
        //LL is empty 
    if(head == NULL){
        node* new_node = new node(data);
        tail = new_node;
        head = new_node;
    }
        //LL is non empyt
    else{
        //step 1
        node* new_node = new node(data);
        //step 2
        new_node->next = head;
        //step 3;
        head = new_node;
        

    }
}

//insert at tail function
void insertAtTail(node* &head, node* &tail, int data){
    //check is LL is empty
        //if emply 
    if(tail == NULL){
        //means there is no node in ll
        //so we need to create a LL which will be both head and tail
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
    }   
        //no empty LL
    else{
        //step 1:
        node* new_node = new node(data);
        //step 2:
        tail->next = new_node;
        //step 3:
        tail = new_node;


    }       
}
int findLength(node* &head){
    int len = 0;
    node* temp = head;
    while(temp != head){
        temp = temp->next;
        len++;
    }
    return len;
}


//PRINT AT POSTION OF LL
void insertatpostion(int data, int position, node* &head, node* &tail){
    //check if LL is empty or not 
    if(head == NULL){
        node* newNode = new node(data);
        tail = newNode;
        head = newNode;
        return;
    }

    //if postion is 0
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    int len = findLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }
    //find prev and curr position 
    int i = 1;
    node* prev = head;
    while(i< position){
        prev = prev->next;
        i++;
    }

    node* curr = prev->next;



    //now three steps
    
    //step1 : create a new node
    node* newNode = new node(data);
    //step2 : 
    newNode->next = curr;
    //step3:
    prev->next = newNode;


}


//creating print for LL
void printLL(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    //creating NULL head and tail
    node* head = NULL;
    node* tail = NULL;


    //calling function of insert at head of node
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,45);
    //calling function of  insert at tail of node 
    insertAtTail(head,tail,45);
    insertAtTail(head,tail,99);
    insertAtTail(head,tail,79);


    //calling print function for LL
    printLL(head);
    cout<<endl<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;
    cout<<endl;

    insertatpostion(717,3,head,tail);
    insertatpostion(98,5,head,tail);
    
    printLL(head);
    cout<<endl<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;
    

    cout<<endl;
    insertatpostion(2345,0,head,tail);
    printLL(head);
    cout<<endl<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;
    
    
    insertatpostion(777,8,head,tail);
    printLL(head);
    cout<<endl<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;



    return 0;
}