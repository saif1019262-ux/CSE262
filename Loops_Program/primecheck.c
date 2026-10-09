#include<stdio.h>
int main (){
    int n,p=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=(n/2);i++){
        if(n%i==0) p++; 
    }if(p>0) printf("The number is not prime Number");
    else  printf("The number is prime Number");
    return 0;
}