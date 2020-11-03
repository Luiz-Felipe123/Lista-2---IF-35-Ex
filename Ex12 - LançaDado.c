#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. Dados os n
resultados dos lançamentos que devem ser armazenados em um vetor, determinar o número de ocorrências
de cada face. */

int main()
{
    int lado[100];
    int lanca, i;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

    printf("Digite quantas vezes o dado foi lancado: ");
    scanf("%d", &lanca);

    for(i = 0; i < lanca; i++)
    {
        printf("Resultado do lancamento %d: ", i+1);
        scanf("%d", &lado[i]);
        if(lado[i] == 1)
            c1 = c1 + 1;
        else if(lado[i] == 2)
            c2 = c2 + 1;
        else if(lado[i] == 3)
            c3 = c3 + 1;
        else if(lado[i] == 4)
            c4 = c4 + 1;
        else if(lado[i] == 5)
            c5 = c5 + 1;
        else if(lado[i] == 6)
            c6 = c6 + 1;
    }

    system("cls");

    printf("Numero de ocorrencias:\n");
    printf("Lado 1: %d\n", c1);
    printf("Lado 2: %d\n", c2);
    printf("Lado 3: %d\n", c3);
    printf("Lado 4: %d\n", c4);
    printf("Lado 5: %d\n", c5);
    printf("Lado 6: %d\n", c6);

return 0;
}
