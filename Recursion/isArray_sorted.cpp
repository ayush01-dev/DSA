#include <iostream>
using namespace std;

bool isSorted(int arr[], int  i,int& n ){
    //base case 
    if(i == n-1)   //last index pe uske age wale pe compare karne ke liye nhi hai 
        return true;
    
    //first case
    if(arr[i] > arr[i+1]){
        return false;
    }

    //baki recursion ke liye
    return isSorted(arr,++i,n);

    
}

int main(){
    int arr1[] = {10,20,30,40,50,60};
    int arr2[] = {2,4,6,8,9,7};

    int n = 5;

    int index = 0;


    cout<<isSorted(arr2,index,n)<<endl;
    if(isSorted(arr2,index,n) ){
        cout<<"sorted"<<endl;

    }
    else{

        cout<<"Not sorted"<<endl;
    }


    return 0;
}