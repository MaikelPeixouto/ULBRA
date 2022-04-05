#include<stdio.h>

int main(){
    float sal, ch1, ch2, cpmf1, cpmf2, saldo;
    printf("informe seu salario: \n");
    scanf("%f%*c", &sal);
    printf("Informe valor do cheque 1: \n");
    scanf("%f%*c", &ch1);
    printf("Informe valor do cheque 2: \n");
    scanf("%f%*c", &ch2);
    cpmf1=(ch1*0.38)/100;
    cpmf2=(ch2*0.38)/100;
    saldo=sal-ch1-ch2-cpmf1-cpmf2;
    printf("seu saldo sera: %2.f \n", saldo);

    return 0;
}