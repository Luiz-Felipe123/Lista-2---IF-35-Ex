#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"
#include <windows.h>

/* Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
e o limite do vetor é 100) e apresente a soma de seus elementos */

int main()
{
    int vetor[100];
    int op, i, n, soma = 0;

    printf("Digite quantos elementos tera o vetor: ");
    scanf("%d", &n);
    printf("[1] Gerar Vetor\n[2] Ler Vetor\n");
    scanf("%d", &op);

    if(op == 1){
        geraVetor(vetor,n);
        for(i = 0; i < n; i++)
        {
            soma = soma + vetor[i];
        }
    }
    else{
        leiaVetor(vetor,n);
        for(i = 0; i < n; i++)
        {
            soma = soma + vetor[i];
        }
    }
    mostraVetor(vetor,n);

    printf("Soma dos elementos do vetor: %d", soma);
return 0;
}
