#include<stdio.h>

int main(){
    float p_fabrica, perc_d, perc_i, vlr_d, vlr_i, p_final;
    printf("Informe o valor de fabrica: \n");
    scanf("%f%*c", &p_fabrica);
    printf("Informe percentual de lucro do dsitribuidor: \n");
    scanf("%f%*c", &perc_d);
    printf("Informe percentual de impostos: \n");
    scanf("%f%*c", &perc_i);
    vlr_d=p_fabrica*perc_d/100;
    vlr_i=p_fabrica*perc_i/100;
    p_final=p_fabrica+vlr_d+vlr_i;
    printf("Lucro do distribuidor: %2.f \n", vlr_d);
    printf("Valor de impostos: %2.f \n", vlr_i);
    printf("Preco final do veiculo: %2.f \n", p_final);

    return 0;
}