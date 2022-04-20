#include<stdio.h>

int main()
{
    float n1, n2, n3, n4, m;
    printf("Digite a nota 1: \n");
    scanf("%f%*c", &n1);
    printf("Digite a nota 2: \n");
    scanf("%f%*c", &n2);
    printf("Digite a nota 3: \n");
    scanf("%f%*c", &n3);
    printf("Digite a nota 4: \n");
    scanf("%f%*c", &n4);
    m=(n1+n2+n3+n4)/4;
    if(m>=7)
    {
        printf("A nota do aluno foi %2.f \n O aluno esta aprovado", m);
    }
    if (m<7)
    {
        printf("A nota do aluno foi %2.f \n O aluno esta reprovado", m);
    }
    
    return 0;

}