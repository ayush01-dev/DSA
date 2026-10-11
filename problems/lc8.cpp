#include <iostream>
#include <string>
using namespace std;

int main(){

    //step one reomve leading whitspaces
    string s = "-123";
    while(s[0] == ' ' ){
        s.erase(0,1);
    }


    //determine the sign
    char sign = '+';
    if(s[0] == '-'){
        sign = '-';
    }
    //reomve the sign
    s.erase(0,1);


    //remove the leading zeros
    while(s[0] == '0'){
        s.erase(0,1);
    }


    //
    string s1 = "0001";
    int a = stoi(s1);
    cout<<a<<endl;


    cout<<"new s is:"<<s  <<"and sign is :" << sign <<endl;


    

    return 0;
}