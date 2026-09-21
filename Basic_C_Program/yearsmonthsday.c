#include<stdio.h>
int main (){
  int d,y,m;
    printf("Enter Days : ");
    scanf("%d",&d);
    y = d/365;
    d = d%365;
    m = d/30;
    d = d%30;
    if(y>0)printf("%d years" ,y);
    if(m>0)printf(" %d Months",m);
    if(d>0)printf(" %d Days" ,d);
    return 0;
}