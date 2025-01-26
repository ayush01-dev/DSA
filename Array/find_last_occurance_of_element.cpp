#include <iostream>
#include <vector>
using namespace std;
int findlastoccurance(vector <int> v, int target);
int main(){
    vector <int> v {1,1,1,2,5,7,7,7,7,9,20};
    int target = 7;
    int lastoccindex = findlastoccurance(v,target);

    cout<<"Answer is "<<lastoccindex<<endl;

    return 0;
}
int findlastoccurance(vector <int> v,int target){
    int start = 0;
    int end = v.size()-1;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(v[mid]==target){
            ans = mid;
            //Search in right 
            start = mid +1;
        }
        else if (target>v[mid]){
            //Search in right
            start = mid+1;
        }
        else if (target<v[mid]){
            //search in left 
            end = mid-1;
        }
        mid = start+(end-start)/2;

    }

    return ans;
}