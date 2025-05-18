#include <iostream>
#include <string.h>
using namespace std;
bool findpalindrome(char sentence []){
    int i = 0;
    int j = strlen(sentence)-1;
    while (i<=j){
        if (sentence [i] == sentence [j]){
            return true;
        }
        else {
            return false;
        }

        i++;
        j--;
    }
}
int main(){
    char word[100];
    cout<<"Enter any word to check palnidrome or not :";
    cin>>word;
    //int ans = findpalindrome(word);
    //cout<<ans;
    if(findpalindrome(word) ){
        cout<<"palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}