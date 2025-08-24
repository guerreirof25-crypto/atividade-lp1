#include<stdio.h>

void main (void){
int menortime=0;
int maiortime=0;
int times;
int i =1;
int vitorias;
int derrotas;
int empates;
int pontos;
int maiorponto=-1;
int menorponto=9999;
while (i<=20){
    printf("digite o código do time: ");
    scanf("%d", &times);
    printf("digite quantas vitorias: ");
    scanf("%d", &vitorias);
    printf("digite quantos empates: ");
    scanf("%d", &empates);
    printf("digite quantas derrotas: ");
    scanf("%d", &derrotas);
    pontos = 3*(vitorias)+ empates;
    if(pontos>maiorponto){
        maiorponto=pontos;
        maiortime = times;
        } if(pontos<menorponto){
            menorponto=pontos;
            menortime=times;
        }
        i+=1;
}
printf("o maior time é: %d\n", maiortime);
printf("o menor time é: %d\n", menortime);
}
