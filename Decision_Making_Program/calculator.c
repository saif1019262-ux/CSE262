#include<stdio.h>
int main (){
    char c;
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter an operator : ");
    scanf(" %c",&c);
    printf("Enter another number : ");
    scanf("%d",&b);
    switch (c){
        case '+':
         printf("\na+b= %d",a+b);
        break;
        case '-': 
        printf("\na-b= %d",a-b);
        break;
        case '*':
         printf("\na*b= %d",a*b);
         break;
        case '/': 
        printf("\na/b= %d",a/b);
        break;
    }
    return 0;
}