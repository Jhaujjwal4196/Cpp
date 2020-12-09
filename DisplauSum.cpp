#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<< "Please provode the number till you wanna print:\t";
    cin>>n;
    cout<<"Please find all the natural till the given range:\t";
    for(int i=1;i<=n;i++){
        cout<<i<<"\t";
         sum+=i;
    }
    cout<<"\nThe sum of all the natural numbers till the given range is::\t"<<sum<<endl;

}