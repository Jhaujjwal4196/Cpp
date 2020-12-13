// Write a program to shift every element of an array to circularly right. E.g.-
// INPUT : 1 2 3 4 5
// OUTPUT : 5 1 2 3 4

#include <iostream>
using namespace std;
main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int t=a[9];
    for(int i=9;i>=1;i--)
    a[i]=a[i-1];
    a[0]=t;
    for(int i=0;i<10;i++)
    cout<<*(a+i)<<"\t";
}