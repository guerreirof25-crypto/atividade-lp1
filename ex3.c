#include <stdio.h>

void main(void){
    int dolar;
    int real;
    printf("digite o preço em dolar: ");
    scanf("%d", &dolar);
    real=3.17*dolar;
    if(real>1000){
        printf("não é um bom negócio.");
    }else{
        printf("bom negócio.");
    }
}
