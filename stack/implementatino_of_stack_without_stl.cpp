#include <iostream>
using namespace std;
class stack{
    public:

    int* arr;
    int top; //index of last element(top element)
    int size;

    stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;   //in empty case top is -1 (no last element so)
    }


    //functions

    //push function
    void push(int data){
        if(size - top > 1){    //Is there at least 1 empty space left in the array to push a new element?
            //space is availabe in stack
            top++;
            arr[top] = data;
        }
        else{
            //STACK OVERFLOWP
            cout<<" STACK OVERFLOW "<<endl;

        }
    }


    //pop function
    void pop(){
        if(top == -1){
            //stack under flow
            cout<<"STACK UNDER FLOW "<<endl;
        }
        else{
            top--;
        }
    }   


    //get top function
    int gettop(){
        if(top == -1){
            cout<<"There is NO  element in stack"<<endl;
        }

        else{
            // stack not empty
            return arr[top];
        }

    }


    //get size function
    int getsize(){
        return top+1; 
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

     
};

int main(){
    //decleration/creation  of stack ds
    stack s(5);


    //insertion in stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.push(60); //stack overflow

    cout<<"size of stack is :"<<s.getsize()<<endl;


    while(!s.isEmpty()){
        cout<<s.gettop()<<" ";
        s.pop();
    }
    cout<<endl;

    cout<<"size of stack is :"<<s.getsize()<<endl;



    return 0;
}