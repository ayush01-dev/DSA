#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> arr {1,2,3,4,5,6,8,9,10,11};
int start = 0;
int end = arr.size()-1;
int mid = start+(end-start)/2;

while(start<=end){
    if (arr[mid]==arr[mid-1]+1){
        //serch in right
        start = mid +1;
        mid = start+(end-start)/2;

    }
    else {
        int missing_no = arr[mid]-1;
        cout<<missing_no;
    }


}

return 0;
}// Wrong logic dumb