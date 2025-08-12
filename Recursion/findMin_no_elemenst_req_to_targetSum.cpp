#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int>& varr , int target){
    //base case
    if (target == 0 ){
        return 0; //when target == 0 so (zero banane ke liye 0 numbers lagenge)
    }
    if (target <0 ){
        return INT_MAX;
    }

    //first case
    int mini = INT_MAX;
    for(int i = 0; i<varr.size(); i++){
        int ans = solve(varr,target-varr[i]);
        if(ans != INT_MAX)
        mini = min(mini,ans+1);

    }
    return mini;

}



int main(){
    vector <int> varr{1,2};
    int target = 5;
    

    cout<<solve(varr,target)<<endl;





    return 0;
}