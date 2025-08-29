#include <iostream>
using namespace std;

void mergeTwoSortedArray(int* arr,int s , int e){
    cout<<"start :"<<s<<endl;
    cout<<"end :"<<e<<endl;
    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 =  e - mid;

    int* left = new int[len1];
    int* right = new int[len2];


    //copy values into array
    int k = s;
    for(int i = 0; i<len1 ; i++){
        left[i] = arr[k];
        cout<<"left element "<<left[i]<<endl;
        k++;

        
    }

    //cout<<endl;
    
    

    k = mid + 1;
    for (int i = 0; i<len2 ; i++){
        right[i] = arr[k];
        cout<<"right element "<<right[i]<<endl;
        k++;
    }
    
    cout<<endl;
    
    
    



    //merge logic
    int leftindex = 0;
    int rightindex = 0;
    int mainArrayIndex = s;

    while(leftindex < len1 && rightindex <len2){
        if (left[leftindex] < right[rightindex]){
            arr[mainArrayIndex++] = left[leftindex++];

        }
        else {
            arr[mainArrayIndex++] = right[rightindex++];
        }
    }

    //copy logic for remaining elements left
    while(leftindex < len1){
        arr[mainArrayIndex++] = left[leftindex++];

    }
    //copy logci for right arry
    while(rightindex < len2){
        arr[mainArrayIndex++] = right[rightindex++];
    }


    //TODO: delete left and right newly created array

}

void  mergesort(int* arr, int s, int e){
    //base case
    //s == e (single element left in array)
    //s > e (invalid element)
    if(s >= e){
        return;
    }

    int mid = s+(e-s)/2;

    //left part sort kar do recursion bhaiya
    mergesort(arr,s,mid);

    //right part sort kar do recursion bhaiya
    mergesort(arr,mid+1,e);
   
    //merge two sorted array
    mergeTwoSortedArray(arr,s,e);
}

int main(){
    int arr[] = {4,14,0,3,89};
    int n = 5;
    int s = 0;
    int e = n-1;

    //calling mergesort function  
    mergesort(arr,s,e);


    //printing the array
    for (int i = 0; i < n ; i ++){
        cout<<arr[i]<<" ";
    }


    return 0;
}