#include<stdio.h>

int main(){

    int n1, n2, n3, n4;
    int soma;
    printf("Digite n1: ");
    scanf("%d%*c", &n1);
    printf("Digite n2: ");
    scanf("%d%*c", &n2);
    printf("Digite n3: ");
    scanf("%d%*c", &n3);
    printf("Digite n4: ");
    scanf("%d%*c", &n4);
    soma=(n1+n2+n3+n4);
    printf ("a soma dos números é: %d" ,soma);
    
    return 0;
}