#include <iostream>
using namespace std;
int findsq(int target){
    int start = 0;
    int end = target ;
    int mid = start + (end -start )/2;
    int store = -1;

    while (start<=end){
        if (mid*mid > target){ 
            //serach in left
            end = mid -1;
        }
        else if (mid*mid == target ){
            return mid;
        }
        else {
            //if mid*mid < target then store and search in right
            store = mid;
            start = mid + 1;
        }
        mid = start + (end - start )/2;
    }
    return store;
}
int main (){
    int n;
    cout<<"enter the no you want's to find square root: ";
    cin>>n;  
 
    int ans = findsq(n);
    cout<<"square root is "<<ans<<endl;
    

     // for precise value 
     
     int precision;
     cout<<"Enter the decimal values needed : ";
     cin>> precision;
    
     float  finalAns = ans;
     float step = 0.1;
     for (float i = 0 ; i<precision; i++){
        for(float j = finalAns; j*j<n ; j = j + step){
            finalAns = j;

        }
        step = step/10;

     }
    
    cout<<"final answer is "<<finalAns<<endl;
    return 0;
}