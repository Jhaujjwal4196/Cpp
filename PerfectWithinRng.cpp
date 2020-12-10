#include <iostream>
using namespace std;
main(){
    int n,i,j,sum;
    cout<<"Pleease povide us the limit to check :\t";
    cin>>n;
    cout<<"Please Find the list of the perfect numbers within the gien range:\n";
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0)
            sum+=j;
        }
        if(sum==i)
        cout<<i<<"\t";
    }
}