#include <iostream>
using namespace std;

int fibo(int n){
    //base Case
    if(n == 0 )
        return 0;
    if(n == 1)
        return 1;
    
    //recusive relation
    int ans = fibo(n-1)+fibo(n-2);
    return ans;
    

}

int main(){

    int n;
    cout<<"enter the no: ";
    cin>>n;
    int value = fibo(n);

    cout<<"fibo no for is "<<value<<endl;


    return 0;

}