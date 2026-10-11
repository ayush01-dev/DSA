#include <iostream>
using namespace std;


class stack {
    public:
    //properties
    int *arr;   //arr is pointer which will point heap stoarge
    int size; //size of our stack will be 
    int top; //index of top element



    stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    //behavoiur


    //first
    void push(int data){
        if(size-top > 1){
            top++;
            arr[top] = data;
            
        }
        else{
            cout<<"stack  overflowr , cant insert any element";
        }
    }
    
    //second
    void pop(){
        if(top == -1){
            cout<<"Stack underflow , can't remove";
        }
        else{
            top--;
        }
    }

    //third
    int getsize(){
        return top+1;
    }


    //fourth
    int getTop(){
        if(top == -1){
            cout<<"stack sempty";
        }

        else{
            return arr[top];
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }






};


int main(){

    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    while(! s.isempty()){
        cout<<s.getTop()<<" ";
        s.pop(); //its imp to remove top otherwise we will end up getting same top at infinte loop
    }




    return 0;
}