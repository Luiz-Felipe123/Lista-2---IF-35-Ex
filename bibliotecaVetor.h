#ifndef BIBLIOTECAVETOR_H_INCLUDED
#define BIBLIOTECAVETOR_H_INCLUDED

void geraVetor(int v[], int n){
	int i;
	srand(time(NULL));// inicializa gerador de numeros
	for(i=0; i<n; i++)
		v[i] = rand()%10;
}
//---------------------------------
void mostraVetor(int v[], int n){
	int i;
	for(i=0;i<n;i++)
	   printf("%d |", v[i]);
	printf("\n");
}
//---------------------------------
void leiaVetor(int v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   fflush(stdin);
	   scanf("%d",&v[i]);
	}// fim for
	printf("\n");
}
//-------------------------------


#endif // BIBLIOTECAVETOR_H_INCLUDED
