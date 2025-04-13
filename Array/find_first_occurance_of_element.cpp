#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector <int> v , int target){
    int start = 0;
    int end = v.size()-1;
    int mid = start+(end-start)/2;
    int store = -1;
    while(start<=end){
        //checking mid value with target
        if(v[mid]==target){         //mid = 7;
            store = mid;            //sotre = 7;
            //Search in left
            end = mid-1;            //end = 6
            mid = start+(end-start)/2;  //mid =3


        }
        else if(target>v[mid]){  //yes
            //search in right       
            start = mid+1;          
        }
        else if(target<v[mid]) {
            //search in left
            end=mid-1;     
        }
        mid = start+(end-start)/2;
    
    }
    return store;
}


int main(){
    vector <int> v{1,3,3,3,3,3,3,4,4,4,4,4,6,7,9};   
    int target = 4;
    int firstOccuranceindex = firstOccurance(v,target);
    cout<<"answer is "<<firstOccuranceindex<<endl;



    return 0;
}