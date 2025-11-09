
// BRUTE FORCE SOLUTION ONLY 

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = 11;
    int ans;
    for(int i = 0; i<n; i++ ){
        if(i == 0){
            if(arr[i] != arr[i+1]){
                ans = arr[i];
                break;
            }
        }

        if(i == n-1){
            if(arr[i] != arr[i-1]){
                ans  = arr[i];
                break;
            }
        }

        else{
            if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
                ans = arr[i];
                break;
            }
        }

        
    }

    cout<<"no is "<<ans;

    return 0;
}