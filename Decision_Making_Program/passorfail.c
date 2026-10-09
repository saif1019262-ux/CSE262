#include<stdio.h>
int main (){
    int n;
    printf("Enter Total number : ");
    scanf("%d",&n);
    if(n>0 && n<41) printf ("Failed");
    else if(n>39 && n<50) printf ("C");
    else if(n>49 && n<60) printf ("B");
    else if(n>59 && n<70) printf ("A-");
    else if(n>69 && n<80) printf ("A");
    else if(n>79 && n<101) printf ("A+");
    return 0;
}