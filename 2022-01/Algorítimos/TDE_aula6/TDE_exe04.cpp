#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Digite o primeiro numero \n");
    scanf("%f%*c", &num1);
    printf("Digite o segundo numero \n");
    scanf("%f%*c", &num2);
    printf("Digite o terceiro numero \n");
    scanf("%f%*c", &num3);
    if((num1<num2) && (num1<num3)){
        if(num2<num3){
            printf("A ordem crescente e: %2.f - %2.f - %2.f ", num1, num2, num3);
        } else{
            printf("A ordem crescente e: %2.f - %2.f - %2.f ", num1, num3, num2);
        }
    }
     else if((num2<num1) && (num2<num3)){
        if(num1<num3){
            printf("A ordem crescente e: %2.f - %2.f - %2.f  ", num2, num1, num3);
        } else{
            printf("A ordem crescente e: %2.f - %2.f - %2.f ", num2, num3, num1);
        }
    }
    else if((num3<num1) && (num3<num1)){
        if((num1<num2)){
            printf("A ordem crescente e: %2.f - %2.f - %2.f ", num3, num1, num2);
        } else{
            printf("A ordem crescente e: %2.f - %2.f - %2.f ", num3, num2, num1);
        }
    }

    return 0;
}