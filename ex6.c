#include <stdio.h>

void main(void){
    int soma=0;
    int n;
    int i=1;
    printf("digite n:  ");
    scanf("%d", &n);
    while (i<=n){
        soma+=i*i;
        i+=1;
    }
    printf("a soma é: %d\n", soma);
}
