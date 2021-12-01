#include<stdio.h>
//大小寫轉換//
int main(){
    char input, output;
    printf("Enter an English alphabet: ");
    scanf("%c", &input);
    output = input + ('a'-'A');
    printf("%c", output);
    return 0;
}