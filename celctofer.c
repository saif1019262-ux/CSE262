#include<stdio.h>
int main (){
    float T;
    char ch;
    printf("Enter tempareture(exp:23.4C or 58.1F) : ");
    scanf ("%f%c", &T, &ch);
    if(ch== 'C' ||ch== 'c' ){
        T=((9*T)/5)+32;
    }else{
        T=((T-32)/9)*5;
    }
    printf("%f",T);

    return 0;
}
