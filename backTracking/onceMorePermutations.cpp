#include <iostream>
using namespace std;


void PrintPermutations(string &s ,int i ){
    //base case
    if(i>= s.length()){
        cout<<s<<" ";
        return;
    }

    
    for(int j = i ; j< s.length(); j++){
        //swaping for every i with j 
        swap(s[i],s[j]);

        //recursive call
        PrintPermutations(s,i+1);


        //backtracking
        swap(s[i],s[j]);
    }
}



int main(){
    string s = "xyz";
    int i = 0;
    PrintPermutations(s,i);

    return 0;
}