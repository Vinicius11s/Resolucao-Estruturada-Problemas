#include <stdio.h>
#include <conio.h>

//2.	POR VALOR - Fa�a um programa que simule um calculador de 4 opera��es. Seu programa devera:
//a.	ler dois n�meros e o operador;
//b.	chamar procedimentos com passagem de par�metros para efetuar os c�lculos;
//c.	escrever o resultado ao final.

void calcular_soma(float n1, float n2){
	float soma;
	soma = n1 + n2;
	printf("A Soma � igual a: %0.2f ", soma);
}

void calcular_sub(float n1, float n2){
	float sub;
	sub = n1 - n2;
	printf("A Subtracao � igual a: %0.2f ", sub);
}

void calcular_mult(float n1, float n2){
	float mult;
	mult = n1 * n2;
	printf("A Multiplicacao � igual a: %0.2f ", mult);
}

void calcular_div(float n1, float n2){
	float div;
	div = n1 / n2;
	printf("A Divisao � igual a: %0.2f ", div);
}

void main(){
	float n1, n2;
	int opcao;
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo  valor: ");
	scanf("%f", &n2);
	printf("\n<<<Menu de Operacoes>>> ");
	printf("\n1 - Soma");
	printf("\n2 - Subtracao");
	printf("\n3 - Multiplicacao");
	printf("\n4 - Divisao");
	printf("\nEscolha uma Opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			calcular_soma(n1, n2);
		break;
		
		case 2:
			calcular_sub(n1, n2);
		break;
		
		case 3:
			calcular_mult(n1, n2);
		break;
		
		case 4:
			calcular_div(n1, n2);
		break;
	}
}
