#include<stdio.h>
int main (){
    char a;
    printf("Enter an alphabet : ");
    scanf(" %c",&a);
    switch (a){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
         printf("This is VOWEL");
        break;
        default :
        printf("This is consonant");
        break;
    }
    return 0;
}