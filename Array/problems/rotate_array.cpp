#include <iostream>
#include <vector>
using namespace std;


//this thing will only work for this test case
//for more other you have to use % modulus


int  main(){
    
    vector <int> varr = {1,2,3,4};
    int n = varr.size();
    int k = 2;


    vector <int> carr = varr;


    int i = 0;
    while(i<n){
        varr[i] = carr[i+k];
        if(i+k >= n){
            varr[i] = carr[i+k-(k+k)];
        }
        i++;
    }

    for(auto val:varr){
        cout<<val<<" ";
    }

    
    
    
    return 0;
}