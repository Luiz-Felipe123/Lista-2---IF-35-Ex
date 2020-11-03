#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Gere uma matriz de N Linhas x M Colunas. Solicitar um número ao usuário e passe para uma função que
deve verificar quantas vezes este se encontra na matriz. */

int contNum(int num, int matriz[100][100], int l, int c)
{
    int i, j;
    int contador = 0;

    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
        {
            if(num == matriz[i][j])
                contador = contador + 1;
        }
    return contador;
}

int main()
{
    int matriz[100][100];
    int lin, col, i, j, num, cont;

    printf("Digite o valor a ser procurado na matriz: ");
    scanf("%d", &num);
    system("cls");
    printf("Digite os seguintes valores da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &lin);
    printf("Colunas: ");
    scanf("%d", &col);

    srand(time(NULL));

    for(i = 0; i < lin; i++)
        for(j = 0; j < col; j++)
        {
            matriz[i][j] = rand()%10;
            printf("Elemento[%d][%d]: %d\n", i+1, j+1, matriz[i][j]);
        }
    cont = contNum(num, matriz, lin, col);

    printf("Valor %d apareceu %d vezes.\n", num, cont);
}
