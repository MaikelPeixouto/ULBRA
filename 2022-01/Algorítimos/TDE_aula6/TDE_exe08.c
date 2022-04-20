#include <stdio.h>

int main()
{
    float num1, num2, soma, raiz, op;
    printf("MENU \n");
    printf("1 - Somar dois numeros \n");
    printf("2 - Raiz quadrada de um numero\n");
    printf("Digite sua opcao \n");
    scanf("%f%*c", &op);
    if (op==1)
    {
        printf("Digite um valor para o primeiro numero:");
        scanf("%f%*c", &num1);
        printf("Digite um valor para o segundo numero:");
        scanf("%f%*c", &num2);
        soma=num1+num2;
        printf("A soma de %2.f e %2.f, eh %2.f", num1, num2, soma);
    }
    if (op==2)
    {
        printf("Digite um valor:");
        scanf("%f%*c", &num1);
        raiz=sqrt(num1);
        printf("A raiz quadrada de %2.f eh %2.f", num1, raiz);
    }
    if ((op!=1) && (op!=2))
    {
        printf("Opcao invalida");
    }

    return 0;
    
}