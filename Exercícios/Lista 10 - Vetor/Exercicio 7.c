#include <stdio.h>
#include <conio.h>

#define TF 10

//7.	Escreva um algoritmo que leia dois vetores de 10 posi��es e fa�a a
//multiplica��o dos elementos de mesmo �ndice, colocando o resultado em um terceiro vetor.
//Mostre o vetor resultante.

	
void main(){
	float vetor_um[TF], vetor_dois[TF]
	int i;
	for(i=0;i<TF;i++){
		printf("Elementos %d: ", i + 1);
		scanf("%d", &vetor_um[i]);
	}
	for(i=0;i<TF;i++){
		printf("Elementos %d: ", i + 1);
		scanf("%d", &vetor_dois[i]);
	}
