#include <stdio.h>
#include <stdlib.h>

/* Dado um vetor A de n números reais, faça um programa para obter o maior e o menor elemento do vetor,
apresente o vetor, maior e menor valor */

void floatleiaVetor(float v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   scanf("%f",&v[i]);
	}// fim for
	printf("\n");
}
void mostraVetor(float v[], int n){
	int i;
	for(i=0;i < n;i++)
	   printf("%.1f |", v[i]);
	printf("\n");
}
int main()
{
    float vetor[100];
    int n, i;
    float maior = 0.0, menor = 0.0;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    floatleiaVetor(vetor, n); // Função que le um vetor

    maior = vetor[0];
    menor = vetor[0];

    mostraVetor(vetor, n); // Função que mostra/apresente o vetor na tela

    for(i = 1; i < n; i++)
    {
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    } // fim for

    for(i = 1; i < n; i++)
    {
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    } // fim for
    printf("Maior elemento: %.1f\n", maior);
    printf("Menor elemento: %.1f\n", menor);

return 0;
}
