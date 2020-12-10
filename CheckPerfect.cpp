#include <iostream>
using namespace std;
main(){
    int n,i,sum=0;
    cout<<"Please Provide us the nimber you wanna check:\t";
    cin>>n;
    cout<<"Please Find the list of positive divisors:\n";
    for(i=1;i<=n/2;i++){
        if(n%i==0){
        cout<<i<<"\t";
        sum+=i;}
    }
    cout<<"\nThe sum of all the positive divisors is:\t"<<sum;
    if(sum==n)
    cout<<"\nYes The Povided number is Perfect Number:";
    else
    {
        cout<<"\nSorry Not A perfect number";
    }
    
}