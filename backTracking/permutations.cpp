#include <iostream>
using namespace std;

void printPermutations(string &str, int i ){
    //base case
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }

    //swaping
    for(int j = i ; j < str.size(); j++){

        //swap
        swap(str[i],str[j]);
        //recursive call
        printPermutations(str,i+1);
        //backtraking
        swap(str[i],str[j]);
    
    }
    
}

int main(){
    string str = "abc";
    int i = 0;
    printPermutations(str,i);

    return 0;
}