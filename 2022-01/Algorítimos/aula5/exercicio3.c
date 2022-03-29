#include<stdio.h>

int main(){

    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Digite nota 1: ");
    scanf("%f%*c", &nota1);
    printf("Digite nota 2: ");
    scanf("%f%*c", &nota2);
    printf("Digite nota 3: ");
    scanf("%f5%*c", &nota3);
    printf("Digite peso 1: ");
    scanf("%f%*c", &peso1);
    printf("Digite peso 2: ");
    scanf("%f%*c", &peso2);
    printf("Digite peso 3: ");
    scanf("%f5%*c", &peso3);
    media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("a media ponderada sera: %.2f", media);
    
    return 0;
}