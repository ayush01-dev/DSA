#include <iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int size;
    int rear;
    int front;


    Queue(int size){
        this->size = size;
        arr = new int[size];
        rear = 0;
        front = 0;
    }


    void push (int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;

        }
        else{
            arr[rear] = data;
            rear++;
        }
    }


    void pop (){
        if(rear == front ){
            //queue is empty 
            cout<<"Queue is empty "<<endl;

        }

        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }



    int getfront(){
        if(rear == front){
            cout<<"Queue is empty "<<endl;

        }
        else{
            return arr[front];
        }
    }


    bool isEmpty(){
        if(rear == front ){
            return true;

        }
        else{
            return false;
        }
    }

    int getSize(){
        return rear-front;
    }




};


int main(){
    Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    cout<<"size of queue is "<<q.getSize()<<endl;


    q.pop();

    cout<<"size of queue is "<<q.getSize()<<endl;

    if(q.isEmpty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue Not empty"<<endl;
    }

    cout<<"front element is :"<<q.getfront()<<endl;

    return 0;
}