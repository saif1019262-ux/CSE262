#include<stdio.h>
int main (){
    int n,digits=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        digits++;
    }
       printf("%d",digits);
    return 0;
}