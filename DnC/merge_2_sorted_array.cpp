#include <iostream>
#include <vector>   
using namespace std;

int main(){
    vector <int> varr1 {2,4,6};
    vector <int> varr2 {3,5,7,9,11};
    vector <int> final;

    //two pionters approach to merger two sorted array 
    int i = 0;
    int j = 0;

    while(i < varr1.size() && j < varr2.size() ){
        if(varr1[i] < varr2[j]){
            final.push_back(varr1[i]);
            i++;
        }
        else{
            final.push_back(varr2[j]);
            j++;
        }



    }

    
    final.insert(final.end(), varr1.begin() + i, varr1.end());
    final.insert(final.end(), varr2.begin() + j, varr2.end());


    for(auto val: final){
        cout<<val<<" ";
    }

    return 0;
}