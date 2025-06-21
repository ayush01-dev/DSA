#include <iostream>
#include <vector>


using namespace std;


int main(){

    vector<string> names = {"Ayush", "John", "Priya"};

    // Print all names
    for (string name : names) {
        cout << name << endl;
    }


    vector <int> varr = {8,3,6,1,9,2,5};
    //predefine fucntion to sort  array 
    //sort(varr.begin(),varr.end());

    // trying stoi function srting to integer 
    string L = "12:54";
    cout<<L.substr(3,0)<<endl;
    int n = stoi(L.substr(3,2));
    cout<<n<<endl;
    string a = "2147483647";
    string k = a.substr(0,4);
    cout<<k<<endl;
    unsigned  int b = 2417483648;
    cout<<b;
    return 0;
}