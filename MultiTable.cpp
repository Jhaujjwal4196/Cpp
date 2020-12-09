#include <iostream>
using namespace std;
main(){
    int n,i,sum=0;
    cout<<"please provide us the number you wann =a make ble of:\t";
    cin>>n;
    cout<<"Please find the multiplication table of the provided number:"<<endl;
    for(i=1;i<=10;i++){
        sum+=n;
        cout<<n<<"*"<<i<<"="<<sum<<endl;
    }
}