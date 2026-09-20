#include<stdio.h>
int main (){
    int a , b , temp;
    printf("Enter any two numbers : ");
    scanf ("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swaped : %d %d ",a,b);
    return 0;
}