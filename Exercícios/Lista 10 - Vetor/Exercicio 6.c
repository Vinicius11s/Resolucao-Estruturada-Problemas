#include <stdio.h>
#include <conio.h>



//6.	Fa�a um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N
//e a sua posi��o dentro do vetor, mostrando: "O menor elemento de N �", M, "e sua posi��o dentro do vetor �:", P.

	
void main(){
	int i, vetorN[20], menor = 9585758, posicao;
	printf("Digite 20 Elementos para N\n");
	
	
	for(i=0;i<20;i++){
		printf("Elementos %d: ", i + 1);
		scanf("%d", &vetorN[i]);
		
		if(vetorN[i] < menor){
			menor = vetorN[i];
			posicao = i;
		}
		else{
		}
	}
	printf("\nO menor Elemento de N eh: %d", menor);
	printf("\nE sua posicao dentro do vetor eh: %d", posicao);
}
