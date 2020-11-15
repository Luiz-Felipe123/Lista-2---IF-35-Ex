#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Calcular a soma de 2 matrizes de mesma ordem. */

int main()
{
    int matrizA[100][100], matrizB[100][100], matrizC[100][100];
    int ord, i, j;

    printf("Digite a ordem das matrizes: ");
    scanf("%d", &ord);

    srand(time(NULL));

    printf("MATRIZ A:\n");
    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            matrizA[i][j] = rand()%10;
            printf("%3d", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ B:\n");
    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            matrizB[i][j] = rand()%10;
            printf("%3d", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ A+B:\n");
    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%3d", matrizC[i][j]);
        }
        printf("\n");
    }
return 0;
}
