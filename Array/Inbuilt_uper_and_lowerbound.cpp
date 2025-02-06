#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v {1,2,3,4,5,6,7,8,8,8,8,9};
    int target = 8;

    //for first occurance 
    auto firstocc = lower_bound(v.begin(),v.end(),target);
    cout<<"First occurance index  of "<<target<< " is "<<firstocc-v.begin()<<endl;

    //for last occurance  
    auto lastocc = upper_bound(v.begin(),v.end(),target);
    cout<<"Last occurance idex of "<<target<<" is "<<lastocc-v.begin()<<endl;



    return 0;
}