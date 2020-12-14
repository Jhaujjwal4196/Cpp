#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int fact(int n){
   if(n>1)
    return(n*fact(n-1));
    else
    {
        return 1;
    }
    
}
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a= fact(n)/(fact(n-2)*2);
  
  int x[a],y[a],z[a];
  int m=0;
  for(int i=1;i<=n;i++)
  for(int j=i+1;j<=n;j++){
      x[m]=i&j;
      y[m]=i|j;
      z[m]=i^j;
      m++;
  }
  int max1=0,max2=0,max3=0;
  for(int i=0;i<a;i++){
      if(x[i]>max1&&x[i]<k)
      max1=x[i];
     // for(int i=0;i<a;i++){
      if(y[i]>max2&&y[i]<k)
      max2=y[i];
      //for(int i=0;i<a;i++){
      if(z[i]>max3&&z[i]<k)
      max3=z[i];   
       }
//   for(int i=0;i<a;i++){
// printf("%d\t",y[i]);
//   }
  printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
