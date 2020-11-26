#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaVetor.h"

/*Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes. A prova consta de
10 questões, cada uma com quatro alternativas identificadas por A, B, C, e D. Para isso são dados:
o cartão gabarito;
o número de alunos da turma;
o cartão de respostas para cada aluno, contendo o seu número e suas respostas. */

int main()
{
    char gabarito[10], provaAlunos[10];
    int numAlunos, acertos = 0, i, j;

    printf("Quantidade de alunos: ");
    scanf("%d", &numAlunos);

    printf("Cartao Gabarito:\n");
    leiaVetorChar(gabarito);

    system("cls");

    for(i = 0; i < numAlunos; i++)
    {
        system("cls");
        printf("Cartao Resposta do Aluno[%d]:\n", i+1);

        for(j = 0; j < 10; j++)
        {
            printf("%d - ", j + 1);
            scanf(" %c", &provaAlunos[j]);

            if(provaAlunos[j] == gabarito[i]){
                acertos = acertos + 1;
            }
                if(j == 9)
                {
                    printf("Acertos: %d\n", acertos);
                    printf("Pressione qualquer tecla para continuar...");
                    getch();
                }
        }
    }
}
