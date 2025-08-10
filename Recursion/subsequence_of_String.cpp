#include <iostream>
using namespace std;

void PrintSubsequence(string &s, int i, string ans)
{

    // base case
    if (i >= s.length()){
        cout << ans << endl;
        return;
    }
    // first case

    

    // EXCLUDE 
    PrintSubsequence(s, i+1, ans);

    // INCLUDE 

    //below line is respoinsible for contactination of ans string and ith char for s string
    ans.push_back(s[i]);

    PrintSubsequence(s, i+1,ans);


    //if you want to write include code first then use below line
    //PrintSubsequence(s, i+1, ans+s[i]);
    //ther resion why we did't write here include code first because if do so we have to write{ans.pop_back()}
    //after calling function  
}

int main()
{
    string s = "abc";
    string empty ="";
    int index = 0;

    PrintSubsequence(s, index, empty);

    return 0;
}