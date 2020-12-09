#include <iostream>
using namespace std;

int Factorial(int n){
if(n>1)
return (n*Factorial(n-1));
else
{
    return 1;
}

}
main(){
int n;
cout<<"Please provide the number you wanna have the factorial:\t";
cin>>n;
cout<<"The factorial of the given nuimber is:\t"<<Factorial(n)<<endl;
}