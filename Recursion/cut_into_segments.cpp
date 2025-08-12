#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
int findmaxSegments(int n,int x, int y , int z){
    if (n == 0){
        return 0;
    }
    if(n < 0 ){
        return INT_MIN;
    }

    int ans1 = findmaxSegments(n-x,x,y,z)+1;
    int ans2 = findmaxSegments(n-y,x,y,z)+1;
    int ans3 = findmaxSegments(n-z,x,y,z)+1;

    int ans = max(ans1,max(ans2,ans3));

    return ans;



}


int main(){
    int target = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    
    int maxSegments = findmaxSegments(target,x,y,z);
    if(maxSegments<0){
        maxSegments = 0;
    }
    cout<<"Maximum Segments which can be made "<<maxSegments;

    return 0;
}