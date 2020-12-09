#include <iostream>
using namespace std;
 main(){
     int i,n;
     float sum=0;
     cout<<"Please provide the end[oint of the seies:\t";
     cin>>n;
     for(i=1;i<=n;i++){
     sum+=1/i;}
     cout<<"The requires sum till the povided endpoint is:\t"<<sum<<endl;
 }