#include <stdio.h>

int main(){
    float num1, num2, num3, num4;
    printf("Digite tres numeros em ordem crescente: \n");
    scanf("%f%*c", &num1);
    scanf("%f%*c", &num2);
    scanf("%f%*c", &num3);
    printf("Digite um numero fora de ordem: ");
    scanf("%f%*c", &num4);
    if ((num4>num3))
    {
        printf("A ordem decrescente e: %2.f - %2.f - %2.f - %2.f ", num4, num3, num2, num1);
    }
    if ((num4>num2) && (num4<num3))
    {
        printf("A ordem decrescente e:  %2.f - %2.f - %2.f - %2.f ", num3, num4, num2, num1);
    }
    if((num4>num1) && (num4<num2))
    {
        printf("A ordem decrescente e:  %2.f - %2.f - %2.f - %2.f ", num3, num2, num4, num1);
    }
    if((num4<num1))
    {
        printf("A ordem descresente e:  %2.f - %2.f - %2.f - %2.f ", num3, num2, num1, num4);
    }
    

    return 0;
}