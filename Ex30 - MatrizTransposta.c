#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Uma matriz M pode ser transposta em uma matriz N onde o n�mero de linhas/colunas da primeira passa a
ser o n�mero de colunas/linhas da segunda. Fa�a um programa que leia uma matriz 4x3, gere sua transposta
e apresente a matriz resultante. */

int main()
{
    int matriz[4][3], matrizT[3][4];
    int i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 3; j++)
        {
            printf("Elemento[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        } // fim la�o for

    system("cls");

    printf("MATRIZ A:\n"); // Apresenta os elementos lidos em forma de matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    } // fim la�o for
    printf("\n");

    printf("MATRIZ TRANSPOSTA DE A:\n"); // Apresenta a matriz transposta de A
    for(j = 0; j < 3; j++){
        for(i = 0; i < 4; i++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    } // fim la�o for

return 0;
}
