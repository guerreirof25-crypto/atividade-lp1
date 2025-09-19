#include <stdio.h>

void main(void){
    int a;
    int b;
    printf("digite o primeiro valor: ");
    scanf("%d", &a);
    printf("digite o segundo valor: ");
    scanf("%d", &b);
    if(a>b){
        printf("o maior valor é: %d", a);
    }else{
        printf("o maior valor é: %d", b);
    }
}
