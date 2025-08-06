#include <iostream>
using namespace std;
string removeAdjDup(string& currString, int i){
    //base case
    if(i >= currString.length())
        return currString;

    //1st case
    if(currString[i] == currString[i+1]){
        //remove that substring
        currString.erase(i,i+1);

    }
    string dup = currString;

    //recurtive relation
    return removeAdjDup(dup,++i);

}

int main(){
    string s = "geeksforgeeks";
    int index = 0;
    

    cout<<removeAdjDup(s,index)<<endl;

    return 0;
}


