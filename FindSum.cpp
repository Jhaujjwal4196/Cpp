#include <iostream>
#include <cmath>
using namespace std;
main(){
    int n,k=9,sum=9;
    cout<<"Please provide us the limit you wanna add:\t";
    cin>>n;
    if(n==1)cout<<"The rquird sum is 9";
    else
    for(int i=1;i<n;i++){

k=pow(10,i)*9+k;

cout<<k<<"\t"<<endl;
sum+=k;

    }
    cout<<"The requires sum is:\t"<<sum<<endl;
}