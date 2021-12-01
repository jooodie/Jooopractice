#include<stdio.h>
//交換三個變數質//
int a,b,c,temp;
int main(){
    a = 4; b = 5; c = 6;
    printf("%d\n%d\n%d\n\n", a, b, c);
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0 ;
}