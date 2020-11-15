#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Matriz Identidade é uma matriz quadrada (mesmo número de linhas e colunas) onde todos os elementos da
diagonal principal é 1 e os demais elementos da matriz é 0. Gere uma matriz identidade de ordem N e
apresente a mesma na tela, onde N deve ser informado pelo usuário. */

int main()
{
    int matriz[100][100];
    int ord, i, j;

    printf("Digite a ordem da matriz identidade: ");
    scanf("%d", &ord);

    srand(time(NULL));

    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            matriz[i][j] = rand()%10;
        }
    }

    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            if(i == j)
                matriz[i][j] = 1;
            if(i != j)
                matriz[i][j] = 0;
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

return 0;
}
