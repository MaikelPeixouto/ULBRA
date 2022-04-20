#include <stdio.h>

int main(){
    float num1, num2;
    printf("Digite o primeiro numero \n");
    scanf("%f%*c", &num1);
    printf("Digite o segundo numero \n");
    scanf("%f%*c", &num2);
    if(num1 > num2){
        printf("o maior numero e %2.f \n", num1);
    }else if(num2 > num1){
        printf("o maior numero e %2.f \n", num2);
    }else if(num1 = num2){
        printf("os numeros sao iguais");
    }

    return 0;

}