#include <stdio.h>
#include <math.h>
int main(void){
    // Here your code !
    int n,k=9,sum=9;
   scanf("%d",&n);
    for(int i=1;i<n;i++){
        k=pow(10,i)*9+k;
        printf("%d\t",pow(10,i));

//cout<<k<<"\t"<<endl;
sum+=k;
    }
    printf("%d",sum);
}