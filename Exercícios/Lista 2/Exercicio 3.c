#include <stdio.h>
#include<conio.h>

//3 - Escreva um procedimento que leia seu nome e em uma segunda vari�vel leia seu sobrenome e ao final exiba seu nome
//concatenado com seu sobrenome. Este procedimento dever� ser chamado atrav�s do programa principal.

void exibe_nome_sobrenome(){
	char nome[100], sobrenome[100];
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Informe seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Lido: %s%s", nome, sobrenome);
	
}

void main(){
 exibe_nome_sobrenome();
}
