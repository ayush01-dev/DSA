#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int>& varr , int target,int i){
    //base case
    if (target == 0 ){
        return 0;
    }
    if (target <0 ){
        return INT_MAX;
    }

    //first case
    
    //with varr[i]
    target =  target - varr[i];

    return solve(varr,target,i);

    //with varr[i+1]
    target = target - varr[i+1];
    return solve(varr,target,i+1);

}



int main(){
    vector <int> varr{1,2};
    int target = 5;
    int index = 0;

    int ans = solve(varr,target,index);




    return 0;
}