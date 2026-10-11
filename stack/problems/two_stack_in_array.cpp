#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;


    stack(int size){
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    };



    //behavrious
    void push1(int data){
        if(top2 - top1 == 1){
            //stack overflow
            cout<<"stack overflow";
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data){
        if(top2-top1 == 1){
            cout<<"stack overflow";
        }

        else{
            top2--;
            arr[top2] = data;
        }
    }


    void pop1(){
        if(top1 == -1){
            cout<<"stack underflowr";
            
        }
        else{
            top1--;
        }
    }


    void pop2(){
        if(top2 == size){
            cout<<"stack overflow";
        }

        else{
            top2++;
        }
    }


    bool isEmpty1(){
        if(top1 == -1){
            return true;
        }
        else{
            return false;
        }
    }


    bool isEmpty2(){
        if(top2 == size){
            return true;
        }
        else{
            return false;
        }
    }


    int getTop1(){
        if(top1 == -1){
            cout<<"stack is empty";
        }
        else{
            return arr[top1];
        }
    }


        int getTop2(){
        if(top1 == size){
            cout<<"stack is empty";
        }
        else{
            return arr[top2];
        }
    }
};




int main(){

    stack s(9);

    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);

    s.push2(10);
    s.push2(20);
    s.push2(30);



    while(!s.isEmpty1()){
        cout<<s.getTop1() <<" ";
        s.pop1();
    }cout<<endl;

    while(!s.isEmpty2()){
        cout<<s.getTop2() <<" ";
        s.pop2();
    }

}