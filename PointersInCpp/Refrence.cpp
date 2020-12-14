#include <iostream>
using namespace std;
void increment(int n){
    n++;
}
void icrement2 (int & n){
    n++;
}
int *increment3(int n){
    n++;
    return &n;
}
main(){
    int i=10;
    int &j= i;
    increment(i);
    cout<<i<<"\t"<<j<<endl;
    icrement2(i);
    cout<<i<<"\t"<<j<<endl;
    increment3(i);
    cout<<i<<"\t"<<j<<endl;
      cout<<i<<"\t"<<j<<endl;
    j++;
      cout<<i<<"\t"<<j<<endl;
    i++;
      cout<<i<<"\t"<<j<<endl; 
}