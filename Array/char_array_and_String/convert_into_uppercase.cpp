#include <iostream>
#include <string.h>
using namespace std;

void convertuppercase(char word[]){
    int length = strlen(word);
   for (int i = 0; i<length ; i++){
        if (word[i] !=' '){
            word[i] = word[i] - 'a'+ 'A';
        }
        
    }
}

void convertlowercase(char word[]){
    int length = strlen(word);
    
    for (int i = 0; i<length ; i++){
        if (word[i] !=' '){
            word[i] = word[i] - 'A' + 'a';
        }
        
    }
}

int main (){
    char name[100];
    cout<<"Enter lowercase to change in uppercase :";
    
    //cin>>name;
    cin.getline(name,100);

    convertuppercase(name);
    cout<<name<<endl;

    char word[100];
    cout<<"Enter  uppercase to change in lowercase :";
    
    //cin>>word;
    cin.getline(word,100);

    convertlowercase(word);
    cout<<word;

    return 0;
}