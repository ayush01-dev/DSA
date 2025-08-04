#include <iostream>
using namespace std;
void finddigits(int n ){
    //base case
    if (n == 0)
        return ;

    //first case
    int ans = n % 10;
    cout<<ans<<"";
    

    //rest for recurstion
    finddigits(n/10);


    
}

int main(){
    int n = 647;
    
    finddigits(n);

    return 0;
}