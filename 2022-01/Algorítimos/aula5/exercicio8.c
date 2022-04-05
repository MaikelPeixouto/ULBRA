#include<stdio.h>

    int main(){

        float dep, taxa=5, rend, total;
        printf("Ola!, nosso banco garante 5%% de lucro sobre depositos! \n");
        printf("Informe o valor de deposito: \n");
        scanf("%f*c", &dep);
        rend=(dep*taxa)/100;
        total=dep+rend;
        printf("O rendimento estimado sera de: %2.f \n", rend);
        printf("O valor total sera: %2.f", total);

        return 0;

    }