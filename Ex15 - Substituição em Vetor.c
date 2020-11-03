#include <stdio.h>

/* Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X
por 1. Em seguida mostre o vetor X. */


int main()
{
    int x[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
        if(x[i] <= 0){
            x[i] = 1;
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i+1, x[i]);
    }
return 0;
}
