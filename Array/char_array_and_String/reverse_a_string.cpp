#include <iostream>
#include <string.h>
using namespace std;

int main (){

    char name[100];
    cin>>name;

    int s = 0;
    int e = strlen(name)-1;

    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }

    cout<<"reversed string is "<<name;
    return 0;
}