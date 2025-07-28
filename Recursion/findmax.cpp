#include <iostream>
#include <limits.h>

using namespace std;
void findmaximum(int arr[],int n ,int i,int& max){
    //base case
    if(i >= n){
        return;
    }

    //1st case
    if(arr[i]>max){
        //update max
        max =  arr[i];
        
    }

    //baki recursion ke liye
    findmaximum(arr,n,++i,max);
    

}

int main(){
    int arr[] = {10,30,15,21,44,25,17};
    int n = 7;
    int index = 0;
    int max = INT_MIN;

    findmaximum(arr,n,index,max);
    cout<<"maximum no is "<<max<<endl;

    return 0;
}