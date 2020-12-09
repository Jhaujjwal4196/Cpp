#include <iostream>
#include <cmath>
using namespace std;

int Factorial(int n){
if(n>1)
return (n*Factorial(n-1));
else
{
    return 1;
}}
float Calc(float x, int k){
    return(pow(x,k)/Factorial(k));
}

main(){

    
    int n;
    float x,sum=0;
    cout<<"Please provide the required number of tems you wanna add:\t";
    cin>>n;
    cout<<"Please Provide the value of x\t";
    cin>>x;
    
    for(int i=0;i<n;i++){
        int k=2*i;
        if(i==0){
            sum=1;
        }
        else if(i%2==0){
            sum+=Calc(x,k);
        }
        else
        {
            sum-=Calc(x,k);   
        }
    }
    cout<<"The Sum of the provided set fo values is:\t"<<sum<<endl;

}