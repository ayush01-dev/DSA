#include <iostream>
using namespace std;

int main (){

    // char array
    //char name [100];
    //cin>>name;
    //cout<<"your name is " <<name ; 

    //char name [10];
    //name[0] = 'a';
    //name[1] = 'b';
    //cin>>name[2];

    //cout<<name[0]<<name[1]<<name[2];

    char name [100];
    name[9]='8';
    cin>>name;
    for (int i = 0; i<20; i++){
        cout<<"index "<<i<<" value "<<name[i]<< endl;
    }
    
    int value = (int)name[5]; // after the termination of string a null value will be stored (default)
    cout<<"the default value storerd after the termination of array is "<<value;

    return 0;
}