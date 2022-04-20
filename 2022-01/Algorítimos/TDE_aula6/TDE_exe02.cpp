#include <stdio.h>

int main(){
    float n1, n2, n3, nexam, media;
    printf("Digite a primeira nota \n");
    scanf("%f%*c", &n1);
    printf("Digite a segunda nota \n");
    scanf("%f%*c", &n2);
    printf("Digite a terceira nota \n");
    scanf("%f%*c", &n3);
    media=(n1+n2+n3)/3;
    printf("Media Aritimetica %.2f \n", media);
    if((media >=0 ) && (media <3)){
        printf("Reprovado");
    }else if((media >=3) && (media <7)){
        printf("Exame \n");
    nexam = 12 - media;
    printf("Deve tirar nota %2.f \n", nexam);
    }else if((media >=7) && (media <=10)){
        printf("Aprovado");
    }

    return 0;
}