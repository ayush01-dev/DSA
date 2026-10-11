#include <iostream>
#include <vector>
using namespace std;


void insertionSort(vector <int> &arr ,int n ){
    for(int i = 1; i < n; i++){ 
        int temp = arr[i];
        int j = i-1;
        for(; j>=0 ; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else {
                break;
            }


        }
    arr[j+1] = temp;

    }
}

int main() {
    vector <int> arr = {6,1,20,30,8,5};
    int n = 6;

    insertionSort(arr,n);




    for (auto val: arr){
        cout<<val<<" ";
    }



    return 0;
}