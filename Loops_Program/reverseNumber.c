#include<stdio.h>
int main (){
    int n,r=0,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        ld=n%10;
        r=r*10;
        r=r+ld;
        n=n/10;      
    } printf("%d",r);
    return 0;
}