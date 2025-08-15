#include <iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //recursive relation
    int fib = fibo(n-1)+fibo(n-2);
    
    return fib;

}

int main (){
    int n;
    cout<<"enter no :";
    cin>>n;

    cout<<"fibonacci for is :"<<fibo(n);


    return 0;
}