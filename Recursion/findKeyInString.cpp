#include <iostream>
using namespace std;
bool findkey(string name, char key,int i){
    //base case
    if(i >= name.length())
        //not found
        return false;

    //1st case
    if(name[i] == key){
        return true;
    }

    //baki recursion shmbhal lega
    return findkey(name,key,++i);
    

    

}

int main(){
    string name = "ayush";
    //string  key = "u";
    char key = 'u';z
    int i = 0;
    
    int ans = findkey(name,key,i);
    cout<<ans;

   
    return 0;
}