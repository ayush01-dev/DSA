#include <iostream> 
using namespace std;

int find_index(int target){
    int arr [5] [4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int total_size = 5*4;
    int c = 4;     // c  = no of columns (c*i+j)
    int start = 0;
    int end = total_size - 1;
    int mid = start + (end - start )/2;
    

        while(start <= end){
            int row_index =  mid / c;
            int column_index = mid % c;
            int element = arr [row_index] [column_index];
            if (element == target){
                return mid;
            }
            else if (element < target ){
                start = mid + 1;
                //search in right 
            }
            else {
                //search in left 
                end = mid - 1;
            }
            
            mid = start +(end - start )/2;


        }
    return false ; 
}

int main(){
    cout<< "Enter no to search in matrix ";
    int n;
    cin>>n;

    bool Ans =  find_index(n);
    
    if (Ans){
         cout<<"Index is found "<<find_index(n)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    
    return 0;
}