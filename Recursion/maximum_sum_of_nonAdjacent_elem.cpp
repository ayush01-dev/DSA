#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void solve (vector <int> varr , int& maxi , int i,int sum){
    //base case
    if(i >= varr.size()){
        //upadate max
        maxi = max (maxi,sum);
        return;
    }

    //include 
    solve(varr,maxi,i+2,sum+varr[i]);


    //exclude 
    solve(varr,maxi,i+1,sum);
}


int main(){
    vector <int> varr {2,1,4,9};
    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;


    solve(varr,maxi,i,sum);
    cout<<"maximum sum is "<<maxi<<endl;
    return 0;
}