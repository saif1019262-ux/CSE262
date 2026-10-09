#include<stdio.h>
int main (){
    int n,count=0,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int upto=2;upto<=n;upto++){
        p=0;
            for(int i=2;i<upto;i++){
            if(upto%i==0){ 
                p=1;
                break;
            } else p=0;
        }
        if (p==0) {
            printf ("%d ",upto);
           count++;
        }
    }printf("\ntotal %d prime  numbers",count);
 return 0;
}