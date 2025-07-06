#include  <iostream>
using namespace std;
int main(){

    int arr[4] = {23,53,92,12};

    cout<<arr<<endl; //base address
    cout<<&arr[0]<<endl; //base address (addres of index)
    cout<<&arr<<endl; //base address
    cout<<arr[0]<<endl; //value a index 0;

    //pointer
    int * ptr = arr; 

    cout<<&ptr<<endl;  // address of pointer 
    cout<<ptr<<endl;    // address pointer storing (of arr) base address
    cout<<*ptr<<endl;  // value of , address stored in ptr
    cout<<arr<<endl;   // base address

    cout<<""<<endl;
    int varr [3] = {53,69,92};
    int i = 0;
    cout<<varr[i]<<endl; //53
    cout<<i[varr]<<endl; //53 
    cout<<*(varr)+1<<endl;   //54
    cout<<*(varr+1)<<endl;   //69
         cout<<varr[1]<<endl;
    cout<<*(varr+2)<<endl;   //92
         cout<<varr[2]<<endl;
    

    //tyring to change the base address of varr
    //varr = varr+1;
    // we can't change the address in symbol table so varr or arr is a constant pointer (which can store one constant addres (base adress))
    cout<<"NOW USING CHARACTER ARRAY "<<endl;
    // NOW USING CHARACTER ARRAY
    char ch[11] =  "callOfduty";
    char *c = ch;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<"&ch[0] will also print the entire array "<<&ch[0]<<endl;

    
    cout<<"POINTERS WALE"<<endl;
    cout<<"it will print entire string (not base address) due cout diff implementation for char* "<<c<<endl;
    cout<<*c<<endl;
    cout<<&c<<endl;
    cout<<""<<endl;
    cout<<"ANOTHER EXAMPLE"<<endl;
    cout<<""<<endl;
    //ANOTHER EXAMPLE 

    char name[10] = "sherbano";
    char* cptr = &name[0];

    cout<<name<<endl; //shernabo
    cout<<&name<<endl; // baseaddress
    cout<<*(name+3)<<endl; // name[3] == r 
    cout<<cptr<<endl; // sherbano
    cout<<*(cptr+3)<<endl; // cprt[3] == r;
    cout<<cptr+2<<endl; //erbano
    cout<<*cptr<<endl; //s
    cout<<cptr+8<<endl; //null


    //twist
    cout<<"twist"<<endl;
    char che = 'a';
    char* lama = &che;

    cout<<"printing cher "<<lama<<endl;


    return 0;
}