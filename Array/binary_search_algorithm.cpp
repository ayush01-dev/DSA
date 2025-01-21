#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1; 
    int mid = start+(end-start)/2;  // (start+end)/2 integer over flow prob

    

    while(start<=end){ //0< 6,
        int element = arr[mid];
        if(element == target){ //8 != 12,
            return mid;
        }

        else if(element<target){ //8<12**,
            //search in right
            start = mid+1;
        }
        else{
            //serach in left
            end = mid - 1;  //4
        }
        mid = start+(end-start)/2;//  5
        
    
        
    }

    //element not found;
    return -1;

}

int main(){
    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;
    int target = 16;

   

    int indexOftarget = binarySearch(arr,size,target);
    if (indexOftarget==-1){
        cout<<"element Not found "<<endl;

    }
    else{
        cout<<"element found in "<< indexOftarget <<" index "<<endl;
    }
    


    return 0;
}