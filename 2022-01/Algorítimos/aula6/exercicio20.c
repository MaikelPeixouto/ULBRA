#include<stdio.h>

int main(){
    float ang, alt, esc, rad;
    printf("insira o angulo: \n");
    scanf("%f%*c", &ang);
    printf("insira a altura: \n");
    scanf("%f%*c", &alt);
    rad=ang*3.14/180;
    esc=alt/rad;
    printf("a medida da escada sera: %2.f", esc);

    return 0;
}