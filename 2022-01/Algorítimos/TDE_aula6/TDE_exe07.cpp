#include <stdio.h>

int main()
{
    float A, B, C, I;
    printf("Digite um valor para A: \n");
    scanf("%f%*c", &A);
    printf("Digite um valor para B: \n");
    scanf("%f%*c", &B);
    printf("Digite um valor para C: \n");
    scanf("%f%*c", &C);
    printf("Digite um valor para I: \n");
    scanf("%f%*c", &I);
    if(I==1)
    {
        if((A<B) && (A<C))
        {
           
        }
    }
    else if(B<C)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, B, C);   
       
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, C, B);
    } 
    if ((B<A) && (B<C))
    {
        
    }
    else if(A<C)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", B, A, C);
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", B, C, A);
    }
    if((C<A) && (C<B))
    {

    }
    else  if(A<B)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", C, A, B);
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, C, B);

    }
     if(I==2)
    {
        if((A>B) && (A>C))
        {
           
        }
    }
    else if(B>C)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, B, C);   
       
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, C, B);
    } 
    if ((B>A) && (B>C))
    {
        
    }
    else if(A>C)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", B, A, C);
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", B, C, A);
    }
    if((C>A) && (C>B))
    {

    }
    else  if(A>B)
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", C, A, B);
    }
    else
    {
        printf("A ordem crescente dos numeros e: %2.f - %2.f - %2.f", A, C, B);

    }
     if(I==3)
    {
        if((A>B) && (A>C))
        {
           printf("A ordem desejada e %2.f - %2.f - %2.f", B, A, C);
        }
    }
     if((B>A) && (B>C))
    {
        printf("A ordem desejada e: %2.f - %2.f - %2.f", A, B, C);   
       
    }
    if((C>A) && (C>B))
    {
        printf("A ordem desejada e: %2.f - %2.f - %2.f", A, C, B);
    } 
   
    
}