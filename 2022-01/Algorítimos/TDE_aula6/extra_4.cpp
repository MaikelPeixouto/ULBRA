#include<stdio.h>

int main()
{
    float n1, n2, n3;
    printf("Digite o primeiro numero: \n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%f%*c", &n2);
    if(n1 > n2)
    {
        printf("o maior numero e %2.f \n", n1);
    }
    else if(n2 > n1)
    {
        printf("o maior numero e %2.f \n", n2);
    }
    else if((n3>n2) && (n3>n1))
    {
        printf("o maior numero e %2.f", n3);
    }
    else if(n1 = n2)
    {
        printf("os numeros sao iguais");
    }
}