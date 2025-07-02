#include <iostream>
using namespace std;

int main (){

    //knowing pointers
    int a = 5;
    int b = 5;

    cout<<&a<<endl;
    cout<<&b<<endl;

    //creating a pointer 
    int *ptr = &a;

    //exessing value and address

    cout<<"address ptr is storing "<<ptr<<endl; // print address stored in ptr
    cout<<"value ptr is pointing at "<<*ptr<<endl; // value at, address/loction stored in ptr
    cout<<"address of ptr "<<&ptr<<endl; // will print the address of ptr vaiable




    int x = 4;
    char ch = 'a';
    double y = 2.34;

    int *l = &x;
    char *m = &ch;
    double *n = &y;

    cout<<sizeof(l)<<endl;
    cout<<sizeof(m)<<endl;
    cout<<sizeof(n)<<endl; 

    //the pointers we have created have same size of 4 byte 


    //BADPRACTICES

     //int *point;
     //cout<<"we are checking address in pointer  "<<point<<endl;
     //cout<<"now checking its where it is pointing " <<*point<<endl;

     // some complites give "segmentation fault" 
     

    //mere usmai hora hai pr segment fault ana chye

    //null pointer
    int *po = 0;
    int *ki = nullptr;
   //cout<< *po <<endl;
    //cout<< *ki <<endl;



    // copy  of pointer 
    int value = 1007;
    int *ctr = &value ;
    int *dusractr = ctr;

    cout<< *ctr << endl;
    cout<< *dusractr <<endl;
    return 0;
}