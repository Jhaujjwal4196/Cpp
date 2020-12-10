#include <iostream>
using namespace std;
main(){
    int n,i,count=0;
    cout<<"Please Prvide us the number you wanna check for:\t";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0)
        count++;
    }
    if(count)
    cout<<"\nNot A Prime Number";
    else
    {
        cout<<"\nYes, Prime Number it is:";
    }
    
}