#include<stdio.h>
int main (){
    int n,p=1,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        ld=n%10;
        p=p*ld;
        n=n/10;      
    } printf("%d",p);
    return 0;
}