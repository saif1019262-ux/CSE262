#include<stdio.h>
int main (){
    char n;
    printf("Enter a word : ");
    scanf("%c",&n);
    if (n=='a'|| n=='e'|| n== 'i'|| n=='o'|| n=='u'
    || n=='A'|| n=='E'|| n== 'I'|| n=='O'|| n=='U'){
        printf("The word is vowel");
    }
    else  printf("The word is consonant");
    return 0;
}