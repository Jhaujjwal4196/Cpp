#include <iostream>
using namespace std;
int increment(int **p){
    p+=1; 
}
int increment2(int **p){
    *p+=1; 
}
int increment3(int **p){
    **p+=1; 
}
//only changes done in inrement2 and increment3 will be visible
main(){
    int i=10;
    int *p= &i;
    int **p2= &p;

     cout<<&i<<endl;
     cout<<p<<endl;
     cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<p2<<endl;
    cout<<&p<<endl;
    
    increment(p2);
    cout<<&i<<endl;
     cout<<p<<endl;
     cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<p2<<endl;
    cout<<&p<<endl;
    
    increment2(p2);
    cout<<&i<<endl;
     cout<<p<<endl;
     cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<p2<<endl;
    cout<<&p<<endl;
    
    increment3(p2);
    cout<<&i<<endl;
     cout<<p<<endl;
     cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<p2<<endl;
    cout<<&p<<endl;
 //increment(**p2);


}