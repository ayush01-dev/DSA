#include <iostream>
#include <limits.h>
using namespace std;
void findMin(int arr[], int n , int i , int& min){
    //base case
    if(i>=n)
        return;
    
    //1st case
    if(arr[i]<min){
        //update min
        min = arr[i];
    }

    //bake recursive sambhal lega
    findMin(arr,n,++i,min);
}
int main(){
    int arr[] = {3,534,92,92,12,92,5,1,92};
    int n = 9;
    int min = INT_MAX;
    int i = 0;

    findMin(arr,n,i,min);
    cout<<"minium no is :"<<min<<endl;
    return  0;
}