#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/* Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
pares existem no vetor. Apresente a média dos valores pares */

int main()
{
    int vetor[100], cont = 0;
    int n, i, oper, media, soma;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    printf("[1] Gerar um Vetor\n[2] Ler Vetor Manualmente\n");
    scanf("%d", &oper);

    if(oper == 1)
        geraVetor(vetor, n);
    else
        leiaVetor(vetor, n);

    mostraVetor(vetor, n);
    for(i = 0; i < n; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            cont = cont + 1;
            soma += vetor[i];
        }
    }
    media = soma / cont; // Divide-se todo os valores do conjunto de dados pela quantidade de numeros no conjunto
    printf("Media dos Pares do Vetor: %d", media);

return 0;
}
