#include <iostream>
using namespace std;
int IncrementPointe(int *p){
    p=p+1;
}
int increment(int *p){
    *p+=5;
}
int sum(int a[],int size){
    int sum=0;
     cout<<"The size iof the given array pointer inside the function is\t"<<sizeof(a)<<endl;
    for(int i=0;i<size;i++){
    sum+=a[i];
    }
    return sum;
}
int sum2(int *a,int size){
    int sum=0;
    for(int i=0;i<size;i++){
    sum+=a[i];
    }
    return sum;
}
main(){
    int i=10;
    int *p= &i;

    //when we apply incrementty pointe and try toc change just the pointe variable or the adress pointed by them then it won't be reflected on our main function as ikt simply behaves like a callByValue function...Which can be seen in the example provided below
     cout<<p<<endl;
     IncrementPointe(p);
     cout<<p<<endl;
 //but when we pass value through the function and ty to change the value ;pointed by them then change will surely occour on the main function..
     cout<<*p<<endl;
     increment(p);
     cout<<*p<<endl;

     int a[5]={1,2,3,4,5};
    cout<< sum(a,5)<<endl;
    cout<<"The size iof the given array pointer is\t"<<sizeof(a)<<endl;
//what these illustrations want to say is whwnwver an array is passed it is actually passed as poingter in function rather than an int array in =side a fnction ..so it can be tread as pointer in all the cases...sum2 here verifes the fact that is said in this statement
    cout<<sum(a+2,3)<<endl;
    //also the part of function can be passed through the function which is shown below..basically how it works is aray a points to the first function so the point a+3 o a+n denotes the pointer pinting to nth place and so itis passed from there only..
    cout<<sum2(a+2,3)<<endl;
     

 
}