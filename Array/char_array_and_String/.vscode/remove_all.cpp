#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "abcxyzabc";
    string str2 = "abc";
    

    //int index = str.find(str2);
    
    


    while(int(str.find(str2))>=0){
        //while(pos != string::npos) jab tak pos ki value npos na ho is a better way to do that 
        int startingindex = str.find(str2);
        cout<<startingindex<<endl;
        
        //update string
        str.erase(startingindex,str2.length());
        
 


    }
    cout<<str;
    return 0;
}

