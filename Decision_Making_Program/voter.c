#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n>=18)printf("Voter");
    else printf("Not a Voter");
    return 0;
}