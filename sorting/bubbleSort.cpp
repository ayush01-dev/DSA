#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(vector<int> &varr){
    for(int i = 1; i<varr.size(); i++){
        //for round i to n-1
        bool swp = false;
        for(int j = 0; j<varr.size()-i; j++){
            
            //processing
            if(varr[j]>varr[j+1]){
                swap(varr[j],varr[j+1]);
                swp = true;
            }

        }
        if(swp == false){
            break;
        }

    }


}

int main(){
    vector<int>varr = {10,1,7,6,14,9};
    bubbleSort(varr);
    for(auto num: varr){
        cout<<num<<" ";
    }

    return 0;
}