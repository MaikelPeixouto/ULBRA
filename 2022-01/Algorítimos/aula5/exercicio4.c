#include<stdio.h>

int main(){

    float salario, novosal;
    printf("digite seu salario: \n");
    scanf("%f*c", &salario);
    novosal=salario+salario*25/100;
    printf("o salário com aumento sera: %f", novosal);

    return 0;

}