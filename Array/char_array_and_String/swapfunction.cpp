#include <iostream>
using namespace std;
int main(){ 

    string s = "ayush";
    int arr [] = {1,3};
    swap(s[arr[0]],s[arr[4]]);
    cout<<"new string is "<<s<<endl;

    return 0;
}