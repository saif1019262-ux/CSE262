#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)printf("The number is Divisible by 5 and 3");
    else printf("The number is not Divisible by 5 and 3");
    return 0;
}