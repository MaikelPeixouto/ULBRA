#include<stdio.h>

int main(){

float num, quad, cubo, r2, r3;
printf("Digite um numero: \n");
scanf("%f%*c", &num);
quad=num*num;
cubo=num*num*num;
r2=sqrt(num);
r3=cbrt(num);
printf("numero ao quadrado: %2.f \n", quad);
printf("numero ao cubo: %2.f \n", cubo);
printf("raiz quadrada do numero: %2.f \n", r2);
printf("raiz cubica do numero: %2.f \n", r3);

return 0;
}