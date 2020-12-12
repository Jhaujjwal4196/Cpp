#include <iostream>
using namespace std;
main(){
    int i=10;
   // int *p=NULL;
   int *p= &i;

    cout<<&i<<endl;
    cout<<p<<endl;


//This Line is much more risky than you have ever think of it...Kindly ignore this statement...It's better to initialize the pointers either with nullvalue or with any posiition pointers..The common or general use practice is initialize it to null..Which is known as nuill ponyers
//Nulll pointers means the pointers that pints to null loaction..or the pointer which doesn't point to any memoy location is called Null Pointers...


    cout<<p+1<<endl;

    char *r= NULL;
    double *s= nullptr;

//Sizeof pointer is alwways same i.e. 8 in most of the computers...anfd it;s also 4 in some of the computrers..it's primarily dependent on the type of compiler used during function..

    cout<<sizeof(p)<<endl;
    cout<<sizeof(r)<<endl;
    cout<<sizeof(s)<<endl;



}