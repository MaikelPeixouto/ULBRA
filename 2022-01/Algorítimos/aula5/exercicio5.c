#include<stdio.h>

int main(){

    float sal, perc, aum, novosal;
    printf("informe seu salario: \n");
    scanf("%f*c", &sal);
    perc=25;
    aum=(sal*perc)/100;
    novosal=aum+sal;
    printf("seu aumento sera de: %2.f\n", aum);
    printf("seu novo salario sera de: %2.f", novosal);

    return 0;
}