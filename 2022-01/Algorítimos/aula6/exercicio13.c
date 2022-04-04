#include<stdio.h>

int main(){
    float pes, polegadas,  jardas, milhas;
    printf("Insira a medida em pes: \n");
    scanf("%f%*c", &pes);
    polegadas=pes*12;
    jardas=pes/3;
    milhas=jardas/1.760;
    printf("medida em polegadas: %2.f \n", polegadas);
    printf("medida em jardas: %2.f \n", jardas);
    printf("medida em milhas: %2.f \n", milhas);

    return 0;
}
