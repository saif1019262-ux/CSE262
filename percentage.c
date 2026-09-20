#include<stdio.h>
int main (){
    int a,b,c,d,e;
    printf("Enter the number of five subjects : ");
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float avg= a+b+c+d+e;
    printf("%f",avg/5);
    return 0;
}
