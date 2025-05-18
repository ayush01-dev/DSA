#include <iostream>
#include <string.h>
using namespace std;





void replacespace(char sent[], int length){

    for (int i = 0; i<length; i++ ){
        if(sent[i] == ' '){
            //update space with @
            sent[i] = '@';
        }
    }

}

int main(){
    
 


    char sentence[100];
    cout<<"enter any sentence having spaces :";
    cin.getline(sentence,30);

    int length = strlen(sentence);
    
    replacespace(sentence, length);

    cout<<sentence;

    return 0;
}