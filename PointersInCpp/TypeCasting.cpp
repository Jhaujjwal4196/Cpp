//lets learn abt the typecastingin c++

#include<iostream>
using namespace std;
main(){
    int i=65;
    char p=i;
    cout<<i<<endl;
    cout<<p<<endl;
    //this is known as implicit typecasting where we cast the data of one variable data type to another

    //int *x= &i;
   // char *pc= x;

//this will generate a error as its against compiler ethics to cast one data type to anthe using pointers
//so we'll explicitly typecast to get it compiled  succesfully
  int *x= &i;
  char *pc= (char *)x;

  cout<<x<<endl;
  cout<<pc<<endl;
  cout<<pc<<endl;
  //we assume that the data mst be stored at 4th or last bits as it is the least significant bit and we assume that ut should be inserted at the end..but compiler ,infact, stores the data at starting of the array bit..
  cout<<*(pc+1)<<endl;
  cout<<*(pc+2)<<endl;
  cout<<*(pc+3)<<endl;
  cout<<*pc<<endl;

  //let's cast now char to int explicitly
  char *a= &p;
  int *ab= (int *)a;

  cout<<*a<<endl;
  cout<<ab<<endl;
  cout<<*ab<<endl;
  cout<<*(ab+1)<<endl;


}