#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Uma matriz M pode ser transposta em uma matriz N onde o número de linhas/colunas da primeira passa a
ser o número de colunas/linhas da segunda. Faça um programa que leia uma matriz 4x3, gere sua transposta
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
        } // fim laço for

    system("cls");

    printf("MATRIZ A:\n"); // Apresenta os elementos lidos em forma de matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    } // fim laço for
    printf("\n");

    printf("MATRIZ TRANSPOSTA DE A:\n"); // Apresenta a matriz transposta de A
    for(j = 0; j < 3; j++){
        for(i = 0; i < 4; i++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    } // fim laço for

return 0;
}
