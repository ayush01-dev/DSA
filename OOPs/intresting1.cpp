#include <iostream>
using namespace std;
class Animal{
    int a ;
    int b;
    char ch;
};

int main(){
    cout<<"Size of Animal class is "<<sizeof(Animal)<<endl;
    // Expecting size of animal 4 + 4 + 1 = 9 but getting 12 
    // Read about Padding and Greedy Alignment 
}