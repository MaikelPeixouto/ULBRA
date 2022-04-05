#include<stdio.h>

int main(){
    float a_degr, a_usu, qtd_degr;
    printf("indique a altura dos degraus \n");
    scanf("%f%*c", &a_degr);
    printf("indique a altura que deseja subir: \n");
    scanf("%f%*c", &a_usu);
    qtd_degr=a_usu/a_degr;
    printf("sera necessario esta quantidade de degraus para alcancar a altura desejada: %2.f \n", qtd_degr);

    return 0;
}