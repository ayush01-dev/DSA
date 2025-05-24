#include <iostream>
using namespace std;
int main(){
    
    //Functions of Strings 

    //Replace 
        string str = "Iam looking outside of window ";
        //cout<<str.find("window");
        str.replace(23,6,"door");
        
        cout<<str<<endl<<endl;

    //Erase
        string alpabates = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        alpabates.erase(0,5);
        cout<<alpabates<<endl;

    //length
        string a = "factverse";
        cout<<a.length();

    //substring 
        cout<<a.substr(0,3);

    //compare
        string b = "namaste";
        cout<<a.compare(b);

    //Find
        cout<<str.find("outside");
        
    return 0;
}