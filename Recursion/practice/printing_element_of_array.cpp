#include <iostream>
using namespace std;

void print(char arr[], int n){
    //base case
    if(n < 0 ) return;

    //recusive call
    print(arr,n-1);
    
    //processing
    cout<<arr[n]<<endl;
    //this is call head recurstion case processing done after all the recursive call were maide
}

int main(){
    char arr[] = {'a','b','c','d'};
    int n = 4;

    print(arr,n-1);

    return 0;
}