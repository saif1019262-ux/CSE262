#include<stdio.h>
int main(){
    int num,che=0,fac=1,str=0;
    printf("Enter a number : ");
    if(scanf("%d",&num)!=1) return 0; 
    int temp=num;
    while(temp>0){
        fac = 1;
        int ld=temp%10;
        while(ld>0) {fac=fac*ld;ld--;}
        str = str + fac;
        temp=temp/10;
    }if(str==num) printf("%d is a Strong number\n",num);
    else printf("%d is not a Strong number\n",num);
    return 0;
}