//leetcode 14 buretforce
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector <string> strs = {"flower","flow","flight"};
    vector <string > strs = {"dog","racecar","car"};
    string ans = "";
    //cout<<"emplty sting"<< ans <<endl;                            //ans = f
    string a = strs[0];                         //a = flower
    for (int i = 1; i<strs.size(); i++){        
        string b = strs[i];                     //b = flow 
        //now we will complare a and b 
        int j = 0;
        int k = 0;
        while(j<a.size() && k <b.size()){
            if(a[j] == b[k]){
                ans.push_back(a[j]);

            }
            else{
                ans.pop_back();

            }
            j++;
            k++;
        }
       
   
    
}
cout<<"string is " <<ans;
return 0;
}