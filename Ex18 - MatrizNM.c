#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Receba uma matriz N por M e conte quantos números maiores que X existem na matriz. X deve ser
informado pelo usuário. */

int main()
{
    int matriz[100][100];
    int lin, col;
    int i, j, x, contX = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    system("cls");
    printf("Digite os seguintes valores da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &lin);
    printf("Colunas: ");
    scanf("%d", &col);

    system("cls");

    for(i = 0; i < lin; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Elemento[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > x)
                contX = contX + 1;
        }
    }
    printf("Existem %d numeros maiores que %d na matriz.\n", contX, x);

return 0;
}

