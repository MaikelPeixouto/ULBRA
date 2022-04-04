#include<stdio.h>

int main (){
    int anoatual, anonasc, idadeatual, idade2050;
    printf("Qual o ano atual? \n");
    scanf("%i%*c", &anoatual);
    printf("Qual seu ano de nascimento? \n");
    scanf("%i%*c", &anonasc);
    idadeatual=anoatual-anonasc;
    idade2050=2050-anonasc;
    printf("Sua idade e: %i \n", idadeatual);
    printf("Sua idade em 2050 sera: %i", idade2050);

    return 0;
}