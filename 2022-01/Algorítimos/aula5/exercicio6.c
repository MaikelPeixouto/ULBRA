#include<stdio.h>

int main(){

    float sal, salreceber, grat, imp;
    printf("digite seu salario: \n");
    scanf("%f*c", &sal);
    grat=(sal*5)/100;
    imp=(sal*7)/100;
    salreceber=sal+grat-imp;
    printf("o valor final corrigido e de: %2.f", salreceber);
    
    return 0;
}    
