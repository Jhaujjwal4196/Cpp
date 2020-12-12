//here we'll learn about the character array and hopw it behgaves a bit differentlythan our ormal array..

#include <iostream>
using namespace std;
main(){
    int a[10]={1,2,3,4};
    char ar[]="abc";

    char *ptr= &ar[0];
    int *pt= &a[0];

    cout<<ptr<<endl;
    cout<<ar<<endl;

    cout<<a<<endl;
    cout<<ar<<endl;

    char c= 'j';
    char *pr= &c;
      cout<<c<<endl;
      cout<<pr<<"\t"<<endl;

      //char pointer behaves differently with c++...it prints the value stored in that arrayb or char arther than prnting the addresss...
    
}