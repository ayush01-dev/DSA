#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0 || n == 1){
        return 1;
    }

    
    //recursive call 
    int product = n * factorial(n-1);
    cout<<product<<endl;
    return product;
        //head recursion
        //cause recursive call is made first before processing
        //there are pending operations after recurive call returns.
        

}

int main(){
    int n;
    cout<<"Enter no you want factorial of :";
    cin>>n;


    
    cout<<"factroial of "  <<n<< " is :" <<factorial(n)<<endl;
    

    return 0;
}