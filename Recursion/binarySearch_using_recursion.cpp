#include <iostream>
#include <vector>
using namespace std;

int findtarget(vector <int>&arr, int& target , int start , int end){
    
   
    //base case
    if(start > end )
        //stop and not found
        return -1;

        
    int mid = start+(end-start)/2;
    //1st case
    if(arr [mid] == target){
        //found
        return mid;
    
    }
    else if( arr[mid] > target){
        //search in left
        return findtarget(arr,target,start,mid-1);
;



    }
    else if (arr[mid] < target){
        //sreach in right
       return findtarget(arr,target,mid+1,end);

    }

    
    

}


int main(){
    vector <int> varr  {10,20,30,40,50,60,70,80,90,99};
    int target = 99;
    int start = 0;
    int end = varr.size()-1;
    
    cout<<"Found on index :"<<findtarget(varr,target,start,end)<<endl;

    return 0;
}