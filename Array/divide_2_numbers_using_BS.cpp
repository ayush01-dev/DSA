#include <iostream>
using namespace std;
int main (){
    int divident , divisor;
    cout<<"Enter divident  ";
    cin>>divident;
    cout<<"Enter  divisor ";
    cin>>divisor;
    

    int start = 0;
    int end = abs(divident) ;
    int mid = start +(end - start )/2;
    int Ans = -1;

    while(start<=end){
        if(abs(mid*divisor) == abs(divident) ){
            Ans = mid;
            break;
           
        }
        else if (abs(mid*divisor) < abs(divident)){
            //Store Ans and 
            //search in right
            Ans = mid;
            start = mid + 1;
        }
        else{
            //search in left
            end = mid - 1;           
        }
        mid = start + (end - start )/2;
    }
    if (divident<0 && divisor <0 || divident >0 && divisor >0){
        cout<<"Quotient is  "<< Ans;
    }
    else{
        cout<<"Quotient is  "<< -Ans;
    }
    
    return 0;
}