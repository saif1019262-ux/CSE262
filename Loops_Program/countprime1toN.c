#include<stdio.h>
int main (){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int upto=1;upto<=n;upto++){
        if(upto==1 || upto==2) p=0;
        else {
            for(int i=2;i<upto;i++){
            if(upto%i==0) p=1;
            else p=0;}
            printf("%d",upto);
        } if (p==0) printf ("%d ",upto);
    }
    return 0;
}