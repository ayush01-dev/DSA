#include <iostream>
#include <vector>
using namespace std;
int BS_nearly_sorted_array(vector <int> varr, int target){
    int start = 0;
    int end = varr.size()-1;
    int mid = start + (end - start )/2;

    while(start<=end){
        if (varr[mid]==target){

            return mid;
        }
        if (mid+1 <= end  && varr[mid+1]==target){ // mid + 1 <= end "will prevent from out of bound"
            return mid+1;
        }
        if (mid-1 >= start &&  varr[mid-1]==target){  // mid -1 >= start "will prevent from negavtive index"
            return mid-1;
        }

        else if (varr[mid]>target){
            //Search in left
            end = mid -2;
        }
        else {
            //search in right 
            start = mid + 2;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
 
int main(){
    vector <int> arr {10,30,40,20,50,80,70};
    int target = 70;

    int Ans = BS_nearly_sorted_array(arr,target);
    cout<<"element found in "<<Ans<<" index "<<endl;

    return 0;
}