#include<stdio.h>
int main (){
    int n,m,c,gcd;
    printf("Enter two numbers : ");
    scanf("%d %d",&n,&m);
    if(n>m) c=m;
    else    c=n;
    for(int i=c;i>0;i--){
        if(n%i==0 && m%i==0){gcd=i; break;}
    } printf("GCD is : %d\n",gcd);
    return 0;
}