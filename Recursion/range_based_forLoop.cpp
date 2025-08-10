#include <iostream>
#include <vector>
using namespace std;
//This is called a range-based for loop (introduced in C++11).
//It is used to iterate over all elements in a container (like vector, array, etc.) easily.
//auto automatically deduces the type of val (here, string).
//val is a copy of each element in v as the loop runs.
//The loop runs once for each element in v.
int main(){
    vector <string> greet {"hello","good","morning"};
    int arr[] = {10,20,30,40};
    vector <int> no {2,-2,9,7,};


    for(auto val: greet){
        cout<<val<<" ";

    }
    cout<<endl;
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    for(auto val:no){
        cout<<val<<" ";
    }


    return 0;
}