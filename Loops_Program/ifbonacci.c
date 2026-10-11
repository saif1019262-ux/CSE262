#include<stdio.h>
int main (){
    int a=0,b=1,n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1) {printf("%d",a);continue;}
        if(i==2) {printf(" %d",b);continue;}
        c=a+b;
        a=b;
        b=c;
         if(i>=3) printf(" %d",c);
    }
    return 0;
}