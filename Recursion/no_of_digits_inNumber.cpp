#include <iostream>
using namespace std;
void finddigits(int n ){
    //base case
    if (n == 0)
        return ;

    
    

    //rest for recurstion
    finddigits(n/10);

    //first case
    int ans = n % 10;
    cout<<ans<<"";

    
}

int main(){
    int n = 647;
    
    finddigits(n);

    return 0;
}