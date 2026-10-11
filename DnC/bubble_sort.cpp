#include <iostream>
#include <vector>
using namespace std;



void bubbleSort(vector<int> &arr, int n){
    for(int i = 0 ; i < n-1; i++){
        //for no of round n-1;
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector <int> arr = {10,1,7,6,14,9};
    int n = 6;
    bubbleSort(arr,n);
    for (auto val: arr){
        cout<<val<<" ";
    }
    return 0;
}