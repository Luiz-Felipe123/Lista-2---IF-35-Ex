#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/* Ler N elementos de um vetor A e um valor X. Criar o vetor B contendo os elementos do vetor A
multiplicados por X. */

int main()
{
    int vetorA[100], vetorB[100];
    int i, x, n;

    printf("Digite quantos elementos tera o vetor A:");
    scanf("%d", &n);
    printf("Digite os elementos do vetor A:\n");
    leiaVetor(vetorA, n);

    printf("Digite o valor de X:");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        vetorB[i] = vetorA[i] * x;
    }

    printf("\n");
    mostraVetor(vetorB, n);

return 0;
}
