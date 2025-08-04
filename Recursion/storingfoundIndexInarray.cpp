#include <iostream>
#include <vector>
using namespace std;

void storeInArray(string s, vector <int>& varr, char key, int i ){
    //base case 
    if(i >= s.length())
        return;
    //first case
    if(s[i] == key){
        //found now storen in index
        varr.push_back(i);

    }

    //rest for recurstion
    return storeInArray(s,varr,key,++i);
}

int main(){
    vector <int> varr;
    string s = "MatheMaticalInsturment";
    char key = 'a';
    int index = 0;

    storeInArray(s,varr,key,index);

    for(int i = 0; i<varr.size(); i++){
        cout<<varr[i]<<" ";
    }

    return 0;
}