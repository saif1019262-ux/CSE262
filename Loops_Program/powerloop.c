#include<stdio.h>
int main (){
    int n,a,po=1;
    printf("Enter a number and power : ");
    scanf("%d %d",&a,&n);
    while(n--){
        po=po*a;
    }printf("%d",po);
    return 0;
}