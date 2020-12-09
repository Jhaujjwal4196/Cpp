#include <iostream>
using namespace std;

 main(){
     int n,j,sum=0;
     cout<<"Please provide the number yyoy wanna search:\t";
     cin>>n;
     cout<<"Please find the even numbers till the numbers provuided below:\t";
     for(int i=1;i<=n;i++){
         j=2*i;
         cout<<j<<"\t";
         sum+=j;
     }
     cout<<"\nThe Sum of the even numbners till the nth tetrms is :\t"<<sum<<endl;
     
 }