#include <iostream>
using namespace std;

void printArray(int arr[],int i,int n ){
    
    //base base
    if(i>=n)
        return;
        
    //1 case solve kardo
    cout<<arr[i]<<" ";

    //baki recursion ke liye
    printArray(arr,++i,n);

    //my mistake:- I write i++ insteed of ++i (don't use post incremtne here use preincrement) 
    //so when i++ is there it will copy i =0 then increment thay why getting alwas first element in array
    //imp thing to remember
}

int main(){

    int  arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10;
    int index = 0;
    printArray(arr,index,n);

    return 0;   
}