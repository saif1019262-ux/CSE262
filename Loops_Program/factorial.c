#include<stdio.h>
int main (){
    int n,fac=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        fac=fac*i;
    }printf("%d! = %d",n,fac);
    return 0;
}