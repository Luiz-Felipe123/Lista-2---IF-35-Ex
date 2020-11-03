#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen (Você deve incluir a
biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
ordem inversa. */

int main()
{
    char vetor[100];
    int i;

    gets(vetor);
    for(i = strlen(vetor) - 1; i >= 0; i--)
    {
        printf("%c", vetor[i]);
    }
return 0;
}
