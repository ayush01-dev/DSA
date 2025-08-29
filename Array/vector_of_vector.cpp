#include <iostream>
#include <vector>
using namespace std;

int main(){
    //how to declear a vector of vector
    //vector <vector <int> >v;
    //here vector is outer vector and vector <int> is inner vector 
    

    //initilization of vector
    vector <vector<int> > arr1 (3,vector <int> (4)); //this is 3*4 2d vector
    vector <vector<int> > arr ;

    //push_back value into 2d vector
    vector <int> a{1,2,3,4};
    vector <int> b{5,6,7,8};
    vector <int> c{9,12,11,12};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    //printing 2d vector
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}


