#include <stdio.h>
#include<conio.h>

//4 - Escreva um procedimento que leia 2 n�meros, ap�s a leitura somar e exibir o resultado. Este procedimento dever� ser chamado atrav�s do programa principal.

void ler_dois_numeros(){
	float n1, n2, soma;
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);	
	soma = n1 + n2;
	printf("Resultado: %0.2f", soma);
}

void main(){
	ler_dois_numeros();

}
