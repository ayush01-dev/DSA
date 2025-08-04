#include <iostream>
using namespace std;

int findIndex(string name , char& key , int i ){
    //base case
    if(i >= name.length())
        return -1;
    
    //first case
    if(name[i] == key){
        return i;
    };

    //baki recursion ke liye
    return findIndex(name , key, ++i );


    
    

}
int main(){
    string name = "instrumet";
    char key = 's';
    int index = 0;

    int ans = findIndex(name, key, index);

    cout<<"index on found is "<<ans;

    return 0;
}