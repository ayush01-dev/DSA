#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> var {2,4,4,4,4,4,4,6,8,10};
    int target = 4;
    
    ; 

    return 0;
}
int firstOcc(vector <int> arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (start - end)/2;
    int store = -1;

    while(start<=end){
        if (arr[mid] == target){
            store = mid;

        }

    } 



}
/*int Find_no_occ(vector <int> arr, int target){
    int start = 0; 
    int end = arr.size()-1;
    int mid = start + (end - start )/2;
    
    //variable to store no of occurance
    int  NoOcc = 0;

    while(start<=end){

        if (arr[mid] == target){
            //update NoOcc
            NoOcc = NoOcc++;

            //udpdating arr
            arr[mid] == -1;
            
            //up dating mid;
            mid = 
        }

    }    


}*/
