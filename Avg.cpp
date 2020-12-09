#include <iostream>
using namespace std;
main(){
    int i,n=0,j;
    cout<<"Please provide us the 10 number you wanna insert to the loop:\t";
    for(i=1;i<=10;i++){
        cin>>j;
        n+=j;
    }
    cout<<"The total sum of the enterd numbers is\t"<<n<<endl;
    cout<<"The Average of the enterd numbers is\t"<<n/10<<endl;



}