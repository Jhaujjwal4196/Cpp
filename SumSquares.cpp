#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"Plesae proide the number of terms you wamma have:\t";
    cin>>n;
    cout<<"Please Find the square numbers till the given limit:\n";
    for(int i=1;i<=n;i++){
     cout<<i*i<<"\t";
     sum+=i*i;
    }
    cout<<"\nThe sum of the squares of the numbers till the given limit is:\t"<<sum<<endl;

}