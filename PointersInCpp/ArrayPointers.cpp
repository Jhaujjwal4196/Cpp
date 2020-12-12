//aray using pointrers and some of the basics related to array pointers...

//let us start with initialiing array in cppp using pointers...or just the simple array;;

#include <iostream>
using namespace std;
main(){
    int a[10];
      int *p= a;
       cout<<a<<endl;
       cout<<p<<endl;

       //Basically abpve stattement claerifies that array a or simply the pointer to array a denotes the same thing..Infact they boh are quite similart in properties.. only similar not exactly the same..so mind it..
    cout<<a+1<<endl;
    cout<<p+1<<endl;
    
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;

    cout<<&a<<"\t"<<&a[0]<<endl;
    cout<<p<<endl;

    //the array value can't be reassigned..it means that we can't perform iopertions like..a=a+3 or sthg like that... as a doesn't have it's own m,emory address ..it just points to the first member of array..but if we use pointer variable tto point to that array..then its valu can be reassigned...
    //Also the declaration *(a+i) or a[i] or i[a] or (a+i) defines the same thing that is ith element in the array...

    //These are the things yhat needs to known in array pointers..




}