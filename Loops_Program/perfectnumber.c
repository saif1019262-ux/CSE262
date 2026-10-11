#include<stdio.h>
#include<math.h>
int main(){
    int num,che=0;
    if(scanf("%d",&num)!=1) return 0; 
    for(int i=1;i<num;i++){
        if(num%i==0) che=che+i ;
    } if(che==num) printf("this is a perfect number");
    else  printf("this is not perfect number");
    return 0;
}