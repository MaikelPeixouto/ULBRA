#include<stdio.h>

int main()
{
    float n1, n2, m;
    printf("Digite a nota 1: \n");
    scanf("%f%*c", &n1);
    printf("Digite a nota 2: \n");
    scanf("%f%*c", &n2);
    m=(n1+n2)/2;
    if((m>0) && (m<=4))
    {
        printf("Reprovado!!");
    }
    if((m>4) && (m<=7))
    {
        printf("Exame!");
    }
    if((m>7) && (m<=10))
    {
        printf("Aprovado");
    }
}