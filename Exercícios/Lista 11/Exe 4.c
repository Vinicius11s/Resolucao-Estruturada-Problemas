#include <stdio.h>
#include <conio.h>
#include <string.h>


//4.	Fa�a um programa que leia uma string do teclado e diga se ela � pal�ndrome.
//Uma string � pal�ndrome quando pode ser lida tanto de tr�s pra frente quanto de frente
//para tr�s e possui exatamente a mesma seq��ncia de caracteres. Ex.: ASA, SUBI NO ONIBUS.
//Desconsidere os espa�os. Defina uma fun��o chamada Palindrome que receba uma string como
//par�metro e retorne sim ou n�o no seu programa. Dica: Use a fun��o do exerc�cio 1. 


char inverter_texto(char texto_copia[2000]){
	int i, j, fim;
	char aux;
	
	fim = strlen(texto_copia);
	
	for(i=0, j=fim - 1; i<j ; i++, j--){
		aux = texto_copia[i];
		texto_copia[i] = texto_copia[j];
		texto_copia[j] = aux;
	}
}

void main(){
	char texto_original[2000], texto_copia[2000];;
	
	printf("Informe uma frase: ");
	gets(texto_original);	
	strcpy(texto_copia, texto_original); 
	inverter_texto(texto_copia);
	
	if(strcmp(texto_original, texto_copia) == 0){
		printf("O Texto digitado eh Palindrome!");
	}
	else{
		printf("O Texto digitado nao eh Palindrome!");
	}
	
	
}
