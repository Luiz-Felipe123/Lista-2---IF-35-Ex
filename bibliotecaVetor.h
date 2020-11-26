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
void floatleiaVetor(float v[], int n){
	int i;
	for(i=0;i<n;i++){
	   printf("v[%d]:",i);
	   scanf("%f",&v[i]);
	}// fim for
	printf("\n");
}
//-------------------------------
void mostraVetorFloat(float v[], int n){
	int i;
	for(i=0;i < n;i++)
	   printf("%.1f |", v[i]);
	printf("\n");
}
//-------------------------------
void leiaVetorChar(char v[]){
	int i;
	for(i=0;i<10;i++){
	   printf("%d - ",i+1);
	   fflush(stdin);
	   scanf(" %c",&v[i]);
	}// fim for
	printf("\n");
}
//-------------------------------


#endif // BIBLIOTECAVETOR_H_INCLUDED

