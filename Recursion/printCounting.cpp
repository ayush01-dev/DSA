#include <iostream>
using namespace std;

void printcouting(int n ){
    //base case
    if(n == 0){
        return;
    }
    
    //processing
    cout<<n<<" ";

    //recursive relation
    printcouting(n-1);


    //if do processing after reations the counting will be ascending order
        //cout<<n<<" ";

}

int main(){
    int n;
    cout << "Enter no :";
    cin>>n;


    printcouting(n);


    return 0;
}