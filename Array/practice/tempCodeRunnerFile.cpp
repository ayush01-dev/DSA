#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    //insitilizatoin of vector of vector
    vector<vector<int>> arr (3,vector<int>(4)); // 3* 4 matix with 0 elements

    //printing 2 vector

    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = 0; j <arr[i].size(); j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }


    //inserting element in vector
    vector<int> a {1,2,3,0};
    vector<int>b {4,5,6,0};
    vector<int> c{7,8,9,0};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

        //printing 2 vector
    cout<<endl;


    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j <arr[i].size(); j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }



    return 0;
}