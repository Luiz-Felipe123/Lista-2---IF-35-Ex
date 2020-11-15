#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Leia uma matriz inteira de N Linhas x M Colunas . Após a leitura apresente a matriz criada e encontre a
quantidade de números pares, a quantidade de números ímpares. */

int main()
{
    int lin, col, matriz[100][100];
    int i, j;
    int contPar = 0, contImpar = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas: ");
    scanf("%d", &col);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            printf("Elemento[%d][%d]: ", i+1, j+1);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] % 2 == 0)
                contPar++;
            else
                contImpar++;
        }
    }

    system("cls");

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++)
        {
            printf(" %3d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Quantidade de Par(es): %d\n", contPar);
    printf("Quantidade de Impar(es): %d", contImpar);

return 0;
}
