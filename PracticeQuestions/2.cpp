// Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
// Sample input: 4 8 6 3 2
// Sample output: 4 6 2 6 3 2


#include <iostream>
using namespace std;
main(){
    int a[]={150,90,300,50,400};
    int max,j,max2;
    
    if(a[0]>a[1]){
        max=a[0];
        max2=a[1];
    }
    else{
        max=a[1];
        max2=a[0];
    }
    cout<<max2<<endl;
    int b[6];
    for(int i=0;i<5;i++){
    if(a[i]>=max){
    max=a[i];
    j=i;}
    }
    
    for(int i=0;i<5;i++){
        if(a[i]>max2&&a[i]<max)
        max2=a[i];
    }
    cout<<max<<endl;
    cout<<max2<<endl;
    for(int i=0;i<j;i++)
    b[i]=a[i];
    b[j]=max2;
    b[j+1]=max-max2;
    for(int i=j+2;i<6;i++)
    b[i]=a[i-1];

     for(int i=0;i<6;i++)
     cout<<b[i]<<"\t";
    }
    

