#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;


    
    stack(int data){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }


    //push function
    void push(int data){
        if(size - top > 1){ //atleast one empty space in stack
            //space is available 
            top++;
            arr[top] = data;
        }
        else{
            //STCK Overflow
            cout<<"STACK OVERFLOW"<<endl;

        }


    }

    //pop function 
    void pop(){
        if(top == -1){
            //empty stack
            cout<<"stack in empty "<<endl;
        }
        else{
            top--;
        }
    }

    //get top 

    int gettop(){
        if(top == -1){
            cout<<"there is no element in the stack "<<endl;
        }

        else{
            //stack in not empty 
            return arr[top];
        }
    }

    //get  size 
    


};


int main(){
    

    return 0;
}