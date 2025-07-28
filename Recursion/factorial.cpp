#include <iostream>
using namespace std;


int factorial(int n){
    //base condition
    if (n == 1)
        return 1;
    
    //recursive relation
    int ans = n * factorial(n-1);
    
    return ans;
  
      
}

int main(){
    
    int n;
    cout<<"Enter the Value of n"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"Factorial is "<<ans<<endl;

    return 0;
}