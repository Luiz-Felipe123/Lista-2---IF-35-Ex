#include <stdio.h>
#include <stdlib.h>

/* Cada agremiação é avaliada em vários quesitos; em cada quesito, cada escola recebe cinco notas que variam de 5,0
a 10,0. A nota final da escola em um dado quesito é a soma das três notas centrais recebidas pela escola, excluindo
a maior e a menor das cinco notas */

/* Entrada
A entrada contém uma única linha, contendo cinco números Ni (1 ≤ i ≤ 5), todos com uma casa decimal, indicando as
notas recebidas pela agremiação em um dos quesitos.
Saída
Seu programa deve imprimir uma única linha, contendo um único número com exatamente uma casa decimal, a nota
final da escola de samba no quesito considerado */

int main()
{
    float nota[5];
    float soma = 0.0, maior = 0.0, menor = 0.0;
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &nota[i]);

        if(i == 0){
            maior = nota[0];
            menor = nota[0];
        }
        if(maior < nota[i]){
            maior = nota[i];
        }
        if(menor > nota[i]){
            menor = nota[i];
        }
        soma += nota[i];
    }
    soma = soma - maior - menor;
    printf("%.1f", soma);

return 0;
}
