#include <iostream>
#include <stack> // importing the stack implemention from stl  (standard template library)
using namespace std;


int main(){

    //decleratoin of stack 
    stack <int> st;

    //insertion into stack 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(420);


    //removal in stack
    st.pop(); // it will delet the last entery made in satck

    //check the top element in stack 
    cout<<"top element in stack is :" <<st.top()<<endl;


    //size of stack
    cout<<"size of stack is :"<<st.size()<<endl;


    //check stack is empty or not 

    if(st.empty()){
        cout<<"stack is empty :"<<endl;
    }
    else{
        cout<<"stack in NOT empty :"<<endl;
    }






    return 0;


}