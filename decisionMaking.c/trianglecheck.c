#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three sides : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c) printf ("This is equilateral Triangle ");
        else if(a==b || b==c || a==c) printf ("This is Isoscelesl Triangle ");
        else printf ("This is Scalene Triangle ");
    }else printf("This is not a triangle ");
    return 0;
}