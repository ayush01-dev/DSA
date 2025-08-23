#include <iostream>
using namespace std;

int partition (int arr[], int s , int e ){
    //selcet pivot element and index
    int pivotIndex = s;
    int pivotElement = arr[s];


    //place pivot elemet to right place
    int count = 0;
    for (int i = pivotIndex+1; i <= e; i++){
        if(arr[i] < pivotElement){
            count++;
        }
    }

    //now we have correct place where to place pivot element
    int rightPlace = count + s;  //MM: s ki jagha pe 1 likha tha 
    //now swap it with correct place
    swap(arr[pivotIndex], arr[rightPlace]);
    //now update pivotIndex
    pivotIndex = rightPlace;


    //Now we have to check the in right and left is there correct element present or not 
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){ //this condition will ensure that our i and j correct accordint to pivot index
         while(arr[i] <=  pivotElement){
            i++;

         }
         while(arr[j] > pivotElement){
            j--;
         }

         //now two consdition left
         //a where need to swap 
         //b no need to swap

         if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
         }

    }
    return pivotIndex;

}

void quickSort(int arr[], int s , int e){
    //base case
    if(s >= e ){
        return;

    }

    //partition logic
    int p = partition(arr,s,e);


    //recursive call for left side
    quickSort(arr,s,p-1);

    //recursive call for right side 
    quickSort(arr,p+1,e);
}

int main(){
    int arr[] = {2,29,9,1,9,98,3,5,3};
    //int arr[] = {3,3,3,2,2,1,1}; n = 7 {faild for this test case}
    int n = 9;
     
    int s = 0;
    int e = n - 1;

    quickSort(arr,s,e);

    for(auto val: arr){
        cout<<val<<" ";
    }


    return 0;
}