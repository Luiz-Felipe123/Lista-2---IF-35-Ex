#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Calcular a soma da diagonal secundária de uma matriz de ordem N. */

int main()
{
    int matriz[100][100];
    int i, j, ord, soma = 0;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &ord);

    for(i = 0; i < ord; i++)
        for(j = 0; j < ord; j++)
        {
            printf("Elemento[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(i == ord - 1 - j)
                soma+= matriz[i][j];
        }

    system("cls");

    for(i = 0; i < ord; i++){
        for(j = 0; j < ord; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Soma da Diagonal Secundaria: %d", soma);

return 0;
}

