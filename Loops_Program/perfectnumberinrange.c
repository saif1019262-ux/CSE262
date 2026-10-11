#include<stdio.h>
int main(){
    int num,che=0,inp;
    printf("Enter a range : ");
    if(scanf("%d",&inp)!=1) return 0; 
    for(int j=1;j<=inp;j++){
        che = 0;
        for(int i=1;i<j;i++){
        if(j%i==0) che=che+i ;
    }    if(che==j) printf("%d ",j);
}
    return 0;
}