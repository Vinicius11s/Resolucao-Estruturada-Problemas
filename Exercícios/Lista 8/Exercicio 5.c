#include <stdio.h>
#include<conio.h>

//5.	POR REFER�NCIA: Escreva um procedimento que receba por par�metro os valores de A e  B e retorne os valores
//invertidos, ou seja, A receber� o conte�do de B e B receber� o conte�do de A. Os par�metros dever�o ser por refer�ncia.

void recebedor(float *a, float *b){
 float aux;
 aux = *a;
 *a = *b;
 *b = aux;	
	
}


void main(){
	float a, b;
	printf("<<<Este Programa Inverte os valores digitados>>>");
	printf("\nInforme o Valor de A: ");
	scanf("%f", &a);
	printf("\nInforme o Valor de B: ");
	scanf("%f", &b);
	
	printf("\nValor de A: %0.2f", a);
	printf("\nValor de B: %0.2f", b);
	
	recebedor(&a, &b);
	
	printf("\n\nValor de A: %0.2f", a);
	printf("\nValor de B: %0.2f", b);
	
}
