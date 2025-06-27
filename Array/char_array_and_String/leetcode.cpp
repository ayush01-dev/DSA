#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s = {"abcdefghi"};
    vector<string>output;
    while(s.size()%3 != 0){
        //fill x
        s.push_back('x');

    }

    for (int i = 0 ; i<s.size(); i+= 3){

        output.push_back(s.substr(i,3));

    }
    

    for (const string &chunk : output) {
        cout << chunk << " ";
    }

    return 0;
}