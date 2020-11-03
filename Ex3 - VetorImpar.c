#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/* Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
impares existem no vetor. Apresente o vetor e a quantidade de impares no final */


int main()
{
    int n, oper, vetor[100], i, impar = 0;
    printf("Quantos elementos tera o vetor: ");
    scanf("%d", &n);
    printf("[1] Gerar Vetor\n[2] Ler Vetor\n");
    scanf("%d", &oper);

    if(oper == 1)
        geraVetor(vetor,n);
    else
        leiaVetor(vetor,n);
    mostraVetor(vetor,n);
	for(i=0;i<n;i++)
    {
        if(vetor[i] % 2 == 1)
            impar = impar + 1;
    }

	printf("Quantidade de impares: %d", impar);
}
