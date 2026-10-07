#include<stdio.h>
int main (){
    int a;
    printf("Enter day number : ");
    scanf(" %d",&a);
    switch (a){
        case 1:
         printf("Sunday");
        break;
        case 2:
         printf("Monday");
        break;
        case 3:
         printf("Tuesday");
        break;
        case 4:
         printf("Wednusday");
        break;
        case 5:
         printf("Thursday");
        break;
        case 6:
         printf("Friday");
        break;    
        case 7:
         printf("Saturday");
        break;
    }
    return 0;
}