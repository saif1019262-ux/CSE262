#include<stdio.h>
int main(){
    int num,che=0,fac=1,range;
    printf("Enter a range : ");
    if(scanf("%d",&range)!=1 || range<=0) {
        printf("Invalid input");
        return 0;}
printf("The strong Numbers are : ");
for(num=1;num<=range;num++){
    int str=0;
    int temp=num;
    while(temp>0){
        fac = 1;
        int ld=temp%10;
        while(ld>0) {fac=fac*ld;ld--;}
        str = str + fac;
        temp=temp/10;
    }if(str==num) printf("%d ",num);
}printf("\n");
    return 0;
}