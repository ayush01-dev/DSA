#include <iostream>
using namespace std;
void mergeTwoSortedArray(int* arr,int s,int e){
  for(int i = s; i <= e; i++) {
    cout << arr[i] << " ";
    }
    cout<<endl;
    int mid = s+ (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;

    //creating two empty arry 
    int* left = new int[len1];
    int* right = new int[len2];

    //now adding value in created arry left array and right array
    
    int k = s;
    for(int i  = 0; i < len1 ; i++){
        left[i] = arr[k++];  
    }

    k = mid+1;
    for(int i = 0; i < len2 ; i++){
        right[i] = arr[k++];
    }

    //now use merge two sorted array algo (as a two pointer approch)
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    //remaining array ko add kr do .
    //for left arry
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    //for right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    //TODO; delete left and right array
    
    delete left;
    delete right;

}

void mergesort(int* arr, int s , int e){
    //base case
    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    //recursion sort left part
    mergesort(arr,s,mid);

    //recursion sort right part
    mergesort(arr,mid+1,e);

    //left part sort ho gya && right part sort ho gya 
    //then call "mergeTwoSortedArray"
    //while calling this finction we are passing ther upadated array
    //for first call array is {2,10}
    //for second call array is {2,10,3}
    //for third call array is {29,0}
    //for fourth call array is {2,3,10,0,29}
    mergeTwoSortedArray(arr,s,e);
}

int main(){
    int arr[] = {2,10,3,29,0};
    int n = 5;
    int s = 0;
    int e = n-1;


    //calling mergesort function

    mergesort(arr,s,e);
    cout<<endl;
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}