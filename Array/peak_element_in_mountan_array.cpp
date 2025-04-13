#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> arr {0,10,5,2};
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if (arr[mid]<arr[mid+1]){
            //search in right
            start = mid + 1; // in this A line there is no peak elment so we change start
        }
        else{
            end = mid; // to do not miss our peak element we did this 
        }
        mid = start+(end-start)/2;
    }

    cout<<"peak element is "<<arr[end];

    return 0;
}