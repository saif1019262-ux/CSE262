#include<stdio.h>
#include<math.h>
int main (){
    float p,t,r,n;
    printf("Enter principle : ");
    scanf ("%f",&p);
    printf("Enter years : ");
    scanf ("%f",&t);
    printf("Enter interest rate : ");
    scanf ("%f",&r);
    r=r/100.00;
    printf("Enter Compounding Frequency per year : ");
    scanf ("%f",&n);
    float amount = p*pow((1+(r/n)),n*t);
    printf("Compound interest : %f",amount-p);
 
    return 0;
}
