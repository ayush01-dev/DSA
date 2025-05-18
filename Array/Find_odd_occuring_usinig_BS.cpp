#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> varr){
    int s = 0; 
    int e = varr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if (s==e){
            return s;
        }
        if (mid%2 == 0){
            if(varr[mid] == varr[mid+1]){
                //search in right  ( we are in left side ) 
                s = mid + 2; 
               
            }
            else{
                //either this is our answer
                // or we are in right side 
                e = mid; // as mid can be our answer so .
            }

        }
        else {
            if (varr[mid] == varr[mid-1]){
                //we are on left side so right serach 
                s = mid + 1;

            }
            else {
                // we are no right so left search 
                e = mid - 1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main (){
    vector <int> arr {1,1,2,2,3,3,4,4,3,z600,600,4,4};
    int index = solve(arr);

    cout<<"Odd occuring element is "<<arr[index]<<endl;
    return 0;
}