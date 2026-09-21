#include<stdio.h>
int main (){
  int s,h,m;
    printf("Enter seconds : ");
    scanf("%d",&s);
    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;
    if(h>0)printf("%d hours" ,h);
    if(m>0)printf(" %d minutes" ,m);
    if(s>0)printf(" %d seconds",s);
    return 0;
}
 