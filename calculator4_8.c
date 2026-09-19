#include<stdio.h>
int main (){
    int a,b;
    char ch;
    printf("Enter here : ");
    scanf("%d %c %d",&a,&ch,&b); //intput number a then +,-,*,/,% and then number b
    if(ch== '+')printf("%d",a+b);
    else if(ch=='-')printf("%d",a-b);//exp : 5 - 2 =3
    else if(ch=='*')printf("%d",a*b);
    else if(ch=='/')printf("%d",a/b);
    else if(ch=='%')printf("%d",a%b);
    else printf("please enter a valid arethmetic operator");
   return 0;
}