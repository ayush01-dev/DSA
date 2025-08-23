#include <iostream> 
using namespace std;
//TODO: this logic may not valid for all the test cases

int partition(int arr[], int s , int e){
    int pivotIndex = s;
    int pivotElement = arr[s];

    //place pivotElement to right place
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    //jab mai loop se bahar aaun then i know right postion for pivot element
    int rightIndex = count+s;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex = rightIndex;


    //now i have to check does right and left part of pivot element were correct 
    //left part should have smaller value then pivot
    //and right part should have larger value then pivot
    int i = s;
    int j = e;

    while(i < pivotIndex &&  j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

        //Two case
        //A . find index to swap
        //B. No need to swap

        //if the i or  j will  pass two while inner loop then if conditiono will not run 
        if(i < pivotIndex &&  j > pivotIndex){
            swap(arr[i],arr[j]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int s , int e){
    //base case
    if(s >= e)
        return;
    
    //partitionLogic
    int p = partition(arr,s,e);


    //recusrive call

    //left call
    quickSort(arr,s,p-1);

    //right call
    quickSort(arr,p+1,e);
    
}

int main(){
    int arr[] = {6,1,20,30,8,5,60,5};
    int n = 8;
    int s = 0;
    int e = n-1;
    
    quickSort(arr,s,e);

    for(auto val: arr){
        cout<<val<<" ";
    }


    return 0;
}