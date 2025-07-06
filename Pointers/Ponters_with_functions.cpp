#include <iostream> 
using namespace std;
void doit(int* p ){
    *p = *p + 10; 
}
 void solve ( int arr[]){

        cout<<"size inside sove function "<<sizeof(arr)<<endl;
        cout<<"base address of arr "<<arr<<endl;
        cout<<" addres of arr ponter"<<&arr<<endl;
        
        arr[0] = 50;

    }

int main(){
   

    int arr[10] = {45,35,53,96};
    cout<<"size inside main function "<<sizeof(arr)<<endl;
    cout<<"base addres arr "<<arr<<endl;
    cout<<"base address &arr "<<&arr<<endl;
    for(int i = 0 ; i<10; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<endl<<endl<<"NOW CALLING FUNCTION"<<endl;

    solve(arr);
    cout<<endl<<"updated"<<endl;
      for(int i = 0 ; i<10; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    //when we pass array in a function , the whole array is not passed , acutully the pointer is passed in the funcition
    //thats why we are gettin diffrent size in solve function, [a pointer is created in that void function storing based address of arr ]


    int a = 5;
    int* ptr = &a;
    doit(ptr);
    cout<<"value of a is :"<<a<<endl;


    return 0;
}