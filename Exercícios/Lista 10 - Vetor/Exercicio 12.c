#include <stdio.h>
#include <conio.h>

//12.	Fa�a um algoritmo que leia um vetor A[10]. Inverta ent�o os valores de A.
//troque o primeiro pelo �ltimo, segundo pelo pen�ltimo e assim por diante.
//Mostre o vetor A ap�s as altera��es.


	
void main(){
	int i, j, A[10], A2[10];
	
	printf("Informe 10 valores para o vetor A\n");
	for(i=0, j=9; i<10 ; i++, j--){
		printf("Valor %d: ", i + 1);
		scanf("\n%d", &A[i]);	
		
		A2[j] = A[i];
	}
	printf("\nVetor apos a troca");
	for(i=0 ; i<10 ; i++){
		printf("\n%d", A2[i]);
	}
}
