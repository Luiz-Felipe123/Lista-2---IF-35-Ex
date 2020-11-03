#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/* Receber um vetor de N posições do tipo inteiro verificar quantas vezes um dado valor informado pelo
usuário se encontra no vetor. Apresente também todos elementos do vetor */

int main()
{
    int vetor[100];
    int i, n, num, cont = 0;

    printf("Digite a quantidade de elementos do vetor:");
    scanf("%d", &n);

    leiaVetor(vetor, n);

    printf("Digite o valor que quer encontrar no Vetor: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(num == vetor[i])
        {
            cont = cont + 1;
        }
    }
    printf("\n\n");
    mostraVetor(vetor, n);
    printf("---------------------------------\n");
    printf("Valor %d apareceu %d vez(es) no vetor.\n", num, cont);

return 0;
}
