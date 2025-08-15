#include <iostream>
using namespace std;

void counting(int n){
    //base case
    if(n == 0){
        return;
    }

    //print 
    cout<<n<<" ";
    //recursive relation
    counting(n-1);
}

int main(){
    int n;
    cout<<"Enter no you want counting from :";
    cin>>n;

    counting(n);

    cout<<endl;


    //intresting:
    //i have use here main as a recurstion
    //but consider bad paractice which can lead to stack over flow 
    //because we are not telling program when to stop
    
    main();


    return 0;
}