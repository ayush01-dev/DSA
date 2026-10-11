#include <iostream>
#include <vector>
using namespace std;


void selectionSort(vector<int> &varr, int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(varr[j] < varr[minIndex]){
                minIndex = j;
            }

        }
        swap(varr[minIndex], varr[i]);

    }
}

int main(){

    vector<int>varr = {10,1,7,6,14,9};
    int n = 6;
    
    selectionSort(varr,n);
    for(auto num: varr){
        cout<<num<<" ";
    }

    return 0;
}
