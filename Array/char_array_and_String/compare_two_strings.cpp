#include <iostream>
#include <string.h>
using namespace std;
int comparestring(string a, string b){
    if (a.length() == b.length()){
        int i = 0;
        int j = 0;
        int t;
        while(i<=a.length()){
            if(a[i]==b[j]){
                int t = 0;
            }
            else{
                return 1;
            }
            
            i++;
            j++;
        }
     
    }
    else{
        return 1;
    }
}
int main(){
    string a,b;

    cout<<"Enter A string :";
    cin>>a;
    cout<<"Enter B string :";
    cin>>b;
    //cout<<b.length();
    int Ans = comparestring(a,b);
    //cout<<a.length();

    if (Ans == 0){
        cout<<"Strings A and B are exactlly idendtical"<<endl;

    }
    else{
        cout<<"String A and B are not same "<<endl;
    }
    

    return 0;
}