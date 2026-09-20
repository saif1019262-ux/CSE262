#include<stdio.h>
int main (){
    float p,n,r;
    printf("Enter principle : ");
    scanf ("%f",&p);
    printf("Enter years : ");
    scanf ("%f",&n);
    printf("Enter interest rate : ");
    scanf ("%f",&r);
    printf("%f",p*n*r);
    return 0;
}
