#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Efetuar a multiplicação de uma matriz de N Linhas x M Colunas por um escalar. */

int main()
{
   int matriz[100][100];
   int lin, col;
   int i, j, escalar;

   printf("Digite o numero de linhas: ");
   scanf("%d", &lin);
   printf("Digite o numero de colunas: ");
   scanf("%d", &col);
   printf("Digite o numero escalar: ");
   scanf("%d", &escalar);

   system("cls");

   for(i = 0; i < lin; i++) // Ler os elementos da matriz
        for(j = 0; j < col; j++)
        {
       printf("Elemento[%d][%d]:", i+1, j+1);
       scanf("%d", &matriz[i][j]);
    } // fim laço for

    system("cls");

    printf("MATRIZ A:\n");
    for(i = 0; i < lin; i++){ // Apresentar os elementos em forma de matriz
        for(j = 0; j < col; j++)
        {
       printf("%3d", matriz[i][j]);
      }
      printf("\n");
    } // fim laço for

    printf("\n");

    printf("MATRIZ A * ESCALAR(%d)\n", escalar);
    for(i = 0; i < lin; i++){ // Apresentar a matriz após a multiplicação pelo escalar
        for(j = 0; j < col; j++)
        {
       matriz[i][j] = matriz[i][j] * escalar;
       printf("%3d", matriz[i][j]);
    }
    printf("\n");
} // fim laço for


return 0;
}
