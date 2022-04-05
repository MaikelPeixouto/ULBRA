#include<stdio.h>

int main(){
    float horast, salminimo, vlr_hrt, vlr_salbrt, imp, vlr_salliq;
    printf("Informe as horas trabalhadas: \n");
    scanf("%f%*c", &horast);
    printf("Informe o salario minimo: \n");
    scanf("%f%*c", &salminimo);
    vlr_hrt=salminimo/2;
    vlr_salbrt=vlr_hrt*horast;
    imp=vlr_salbrt*3/100;
    vlr_salliq=vlr_salbrt-imp;
    printf("o salario a receber sera: %2.f", vlr_salliq);

    return 0;
}