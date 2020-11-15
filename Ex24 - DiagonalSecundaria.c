#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal secundária. */

int main()
{

    int matriz[100][100];
    int lin, col, i, j, num;

    printf("Digite os seguintes valores da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &lin);
    printf("Colunas: ");
    scanf("%d", &col);

    printf("\n");

    srand(time(NULL));

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            matriz[i][j] = rand()%10;
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Secundaria:");

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            if(i == col - 1 - j)
            {
                num = matriz[i][j];
                printf(" %d", num);
            }
        }
    }

return 0;
}

