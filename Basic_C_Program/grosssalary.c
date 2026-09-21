#include<stdio.h>
int main (){
  int s,hra,da,ttl;
    printf("Enter Basic Salary : ");
    scanf("%d",&s);
    // salary<10000 --> 20% House Rent Allowance & 80% Dearness Allowance
    // salary>10000 --> 25% House Rent Allowance & 85% Dearness Allowance
    // salary>=10000 -->30% House Rent Allowance & 90% Dearness Allowance
    if(s<10000) ttl = s + (0.2*s) + (0.8*s);
    else if(s>10000) ttl = s + (0.25*s) + (0.85*s);
    else if(s>20000) ttl = s + (0.3*s) + (0.9*s);
    printf("The gross Salary is : %d",ttl);
    return 0;
}