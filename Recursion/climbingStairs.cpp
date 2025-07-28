#include <iostream>
using namespace std;
int Noofways(int n){
    //base case
    if(n == 0 || n == 1)
        return 1;
    

    //recursive relation
    int ans = Noofways(n-1)+Noofways(n-2);
    return ans;

}

int main(){
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    int val = Noofways(n);
    cout<<"No of ways to reach "<<n<<" stairs are "<<val;
    return 0;
}