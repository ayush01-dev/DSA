#include <iostream>
#include <string.h>
using namespace std;
int main (){
    char name [100];
    cout<<"enter  a word ";
    cin>>name;
    int sum = 0;
    int i = 0;
    while((int)name[i] != 0){  // (int)name[i] is changeing null vlue into its numerical value which is 0 (ins ascii table)
        sum = sum + 1; // we can also write while(name[i] != '\0')
        i++;
    }

    cout<<"length of sting is "<<sum<<endl;

    //predifined functions
    cout<<"lenght of string is "<<strlen(name)<<endl;
    return 0;
}