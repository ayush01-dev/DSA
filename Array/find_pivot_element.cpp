#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr {40,50,10,20,30};
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end -start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){ // what is did : arr[mid] > arr[mid+1])
            //search in right 
            start = mid +1;

        }
        else {
            end = mid;
        }
        mid = start + (end - start )/2;

    }
    cout<<"pivot element is "<<arr[end]<<endl;

    return 0;
}