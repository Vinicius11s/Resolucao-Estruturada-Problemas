#include <stdio.h>
#include <conio.h>

#define TF 5

//2.	Preencher um vetor A de 5 elementos com os n�meros fornecidos pelos usu�rios.  Escrever o vetor A ap�s o seu total preenchimento.


void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<<Carrregar Vetor>>>\n\n");
	for (i=0; i<TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
}

void exibir_vetor(int vetor[TF]){
	int i;
	printf("\n\nExibir Vetor>>>\n\n");
	for(i=0; i<TF; i++){
		printf("\nVetor [%d] = %d", i, vetor[i]);
	}
}

void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);	
	
	
}
