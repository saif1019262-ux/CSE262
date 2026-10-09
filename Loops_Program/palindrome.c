#include<stdio.h>
int main (){
    int n,r=0,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i=n;
    while(n>0){
        ld=n%10;
        r=r*10;
        r=r+ld;
        n=n/10;      
    } if(i==r)printf("The number %d is palindrome",i);
    else printf("The number %d is not palindrome",i);
    return 0;
}