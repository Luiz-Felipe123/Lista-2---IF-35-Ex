#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/* Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

int main()
{
    int vetor1[100], vetor2[100], vetor3[100];
    int n, i, op;

    printf("Digite a quantidade de elementos dos vetores: ");
    scanf("%d", &n);
    printf("Primeiro Vetor:\n");
    printf("[1] Gerar Vetor\n[2] Ler Vetor\n");
    scanf("%d", &op);

    if(op == 1)
    {
        geraVetor(vetor1, n);
    }
    else
    {
        leiaVetor(vetor1, n);
    }

    printf("Segundo Vetor:\n");
    printf("[1] Gerar Vetor\n[2] Ler Vetor\n");
    scanf("%d", &op);

    if(op == 1)
    {
        geraVetor(vetor2, n);
    }
    else
    {
        leiaVetor(vetor2, n);
    }

    for(i = 0; i < n; i++)
    {
        vetor3[i] = vetor1[i] * vetor2[i];
    }

    printf("\n\n");
    printf("Vetor 1:\n");
    mostraVetor(vetor1, n);

    printf("\n");
    printf("Vetor 2:\n");
    mostraVetor(vetor2, n);
    printf("----------------------\n");
    printf("Vetor Resultante:\n");
    mostraVetor(vetor3, n);


return 0;
}
