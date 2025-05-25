#include <iostream>
#include <string>
using namespace std;

string  findnoduplicatestring(string s){
    string Ans = " "; //empty array make sure that there is a space between - " "
    //cout<<Ans.length();

    //for (int i = 0; i<str.length(); i++){
    //    if (Ans[Ans.length()-1] != str[i]){
    //        //push back that char in Ans string
    //        Ans.push_back(str[i]);
    //        cout<<"string if not same at "<<i<<"index is "<<Ans<<endl;
    //    }
    //    else{
    //        //if maches then pop back last char from Ans string
    //        
    //        Ans.pop_back();
    //        cout<<"string  if same at "<<i<<"index is "<<Ans<<endl;
    //    }
    //    
    //}
    //return Ans;

    for(int i = 0; i<s.length(); i++){
            if (Ans.length()>0 && Ans[Ans.length()-1] == s[i]){
                //remove last char of ANS
                Ans.pop_back();
            }
            else{
                //push
                Ans.push_back(s[i]);
            }
        }
        return Ans;
}


int main (){
    string s = "abbaca";
   

    cout<<"Non_duplicate_sting_is :" <<findnoduplicatestring(s)<<endl;


    return 0;
}

