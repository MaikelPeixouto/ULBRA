#include <stdio.h>

int main()
{
    int num, resto;
    printf("Digite um numero:");
    scanf("%d%*c", &num);
    resto=num%2;
    if((resto==0))
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero e impar");
    }

    return 0;
}