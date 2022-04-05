#include<stdio.h>

int main(){
    float peso_saco, gato1, gato2, final;
    printf("Declare o peso do saco de racao: \n");
    scanf("%f%*c", &peso_saco);
    printf("Informe a racao do gato 1: \n");
    scanf("%f%*c", &gato1);
    printf("Informe a racao do gato 2: \n");
    scanf("%f%*c", &gato2);
    gato1=gato1/1000;
    gato2=gato2/1000;
    final=peso_saco-5*(gato1+gato2);
    printf("a racao final sera: %2.f", final);

    return 0;
}