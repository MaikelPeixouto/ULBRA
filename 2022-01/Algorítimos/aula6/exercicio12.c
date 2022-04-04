#include<stdio.h>

int main(){
    float num1, num2, r1, r2;
    printf("digite numero 1: \n");
    scanf("%f%*c", &num1);
    printf("digite numero 2: \n");
    scanf("%f%*c", &num2);
    r1=pow(num1, num2);
    r2=pow(num2, num1);
    printf("Resultado numero 1: %2.f \n", r1);
    printf("Resultado numero 2: %2.f \n", r2);

    return 0;
}