#include<stdio.h>
int main (){
    int a;
    printf("Enter Month Number 1.January\n2.February\n3.March\n4.april\n5.may\n6.june\n7.july\n8.august\n9.september\n10.october\n11.november\n12.december");
    scanf(" %d",&a);
    switch (a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
         printf("31 Days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
         printf("30 Days");
         break;
        case 2:
         printf("28/29 days");
         break;
    }
    return 0;
}