#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)printf("Greatest number is : %d\n",a);
    if (b>c && b>a)printf("Greatest number is : %d\n",b);
    if (c>a && c>b)printf("Greatest number is : %d\n",c);
    if (a<b && a<c)printf("smallest number is : %d\n",a);
    if (b<c && b<a)printf("smallest number is : %d\n",b);
    if (c<a && c<b)printf("smallest number is : %d\n",c);
    return 0;
}