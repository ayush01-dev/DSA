#include <iostream>
using namespace std;

void findIndex(string s , char& key , int i ){
    //base case
    if(i >= s.length())
        return;
    //first case
    if(s[i] == key){
        //found
        cout<<"found at index "<<i<<endl;

    }

    findIndex(s,key,++i);
}


int main(){
    string s = "kickBatosiki";
    char key = 'i';

    int index = 0;

    findIndex(s,key,index);


    return 0;
}