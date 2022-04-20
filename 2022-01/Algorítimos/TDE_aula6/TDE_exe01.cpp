#include <stdio.h>

int main(){

    float nota_lab, nota_aval, nota_exam, media;
    printf("Digite a nota do Trabalho de Laboratorio \n");
    scanf("%f%*c", &nota_lab);
    printf("Digite a nota da Avaliacao Semestral \n");
    scanf("%f%*c", &nota_aval);
    printf("Digite a nota do Exame Final \n");
    scanf("%f%*c", &nota_exam);
    media = (nota_lab*2 + nota_aval*3 + nota_exam*5)/10;
    printf("Media ponderada %2.f \n", media);
    if((media >=8) && (media <=10)) {
         printf("Obteve o conceito A");
    }else if((media >=7) && (media <=8)) {
         printf("Obteve o conceito B");
    }else if((media >=6) && (media <=7)) {
         printf("Obteve o conceito C");
    }else if((media >=5) && (media <=6)) {
         printf("Obteve o conceito D");
    }else if((media >=4) && (media <=5)) {
         printf("Obteve o conceito E");
    }else if((media >=3) && (media <=4)) {
         printf("Obteve o conceito F");
    }

return 0;
}

