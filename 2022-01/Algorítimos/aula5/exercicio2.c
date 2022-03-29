#include<stdio.h>

int main(){

    float nota1=10, nota2=11, nota3=10;
    float media;
    printf("Digite nota 1: ");
    scanf("%f%*c", &nota1);
    printf("Digite nota 2: ");
    scanf("%f%*c", &nota2);
    printf("Digite nota 3: ");
    scanf("%f5%*c", &nota3);
    media=(nota1+nota2+nota3)/3;
    printf("a media das notas é: %.2f", media);
    
    return 0;
}