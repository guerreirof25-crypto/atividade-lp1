#include <stdio.h>

void main(void){
    int mph;
    int kph;
    printf("digite a velocidade em mph: ");
    scanf("%d", &mph);
    kph=1.6*mph;
    if(kph>100){
        printf("DESACELERE.");
    }else{
        if(kph<80){
            printf("ACELERE.");
        }else{
            printf("MANTENHA.");
        }
    }
}
