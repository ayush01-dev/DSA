#include <iostream>
#include <vector> 
using namespace std;
int main(){
    vector <vector<int>> varr = {{1,2,3},{4,5,6}};
    // for(auto row : varr){          // row is a vector<int>
    //     for(auto val : row){       // val is an int
    //         cout << val << " ";
    //     }
    //     cout << endl;              // new line after each row
    // }


    // for(int i= 0; i < varr.size(); i++){
    //     for(int j = 0; j < varr[i].size(); j++){
    //         cout<<varr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int i = 0;
    int j = 0;
    while(i < varr.size()){
        if(varr.size()-1*i+j != k-1){
            j++;
     
        }
        else{
            return varr[i][j];
        }


    }   
    return 0;
}
