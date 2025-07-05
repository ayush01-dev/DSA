#include  <iostream>
using namespace std;
int main(){

    int arr[4] = {23,53,92,12};

    cout<<arr<<endl; //base address
    cout<<&arr[0]<<endl; //base address (addres of index)
    cout<<&arr<<endl; //base address
    cout<<arr[0]<<endl; //value a index 0;

    //pointer
    int *ptr = arr; 

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
    varr = varr+1;
    return 0;
}