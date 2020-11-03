#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o menor e
valor da matriz */

int main()
{
    int lin, col, matriz[100][100];
    int i, j;
    int contMenor;

    printf("Digite os seguintes valores da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &lin);
    printf("Colunas: ");
    scanf("%d", &col);

    system("cls");

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
            if(i == 0 && j == 0)
            {
                contMenor = matriz[0][0];
            }
            if(contMenor > matriz[i][j])
                contMenor = matriz[i][j];
        }
    }

    system("cls");

    for(i = 0; i < lin; i++){
            printf("\t");
        for(j = 0; j < col; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Menor valor da matriz: %d", contMenor);

return 0;
}

