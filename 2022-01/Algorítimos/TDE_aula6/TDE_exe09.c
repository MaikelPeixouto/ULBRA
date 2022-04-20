#include <stdio.h>
#include <time.h>

int main(void)
{
   


    
   
     struct time
    {
        t, hr, min
    };
    
    struct date
    {
        d, dia, mes, ano
    };
    d=getdate(&d);
    dia=d.da_day;
    mes=getdate(&d);
    ano=getdate(&d);
    printf("Data atual: %2.d / %2.d / %2.d - ", dia, mes, ano);
    if(mes==1)
    {
        printf("Janeiro");
    }
    if(mes==2)
    {
        printf("Fevereiro");
    }
     if(mes==3)
    {
        printf("Marco");
    }
     if(mes==4)
    {
        printf("Abril");
    }
     if(mes==5)
    {
        printf("Maio");
    }
     if(mes==6)
    {
        printf("Junho");
    }
     if(mes==7)
    {
        printf("Julho");
    }
     if(mes==8)
    {
        printf("Agosto");
    }
     if(mes==9)
    {
        printf("Setembro");
    }
     if(mes==10)
    {
        printf("Outubro");
    }
     if(mes==11)
    {
        printf("Novembro");
    }
     if(mes==12)
    {
        printf("Dezembro");
    }
    t=gettime(&t);
    hr=gettime(&t);
    printf("Hora atual: ");
    printf(hr, ":", min);
}