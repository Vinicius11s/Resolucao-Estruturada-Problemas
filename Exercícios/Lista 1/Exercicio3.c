#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste


void main(){
	int codigo;
	
	printf("<<<Algoritmo mostra a regiao de procedencia conforme seu codigo de origem: >>>");
	printf("\n\nInforme o codigo de origem: ");
	scanf("%d", &codigo);
	
	switch(codigo){
		
		case 1:{
			printf("Sua regiao de procedencia eh: Sul");			
			break;
		}
		case 2:{
			printf("Sua regiao de procedencia eh: Norte");
			break;
		}
		case 3:{
			printf("Sua regiao de procedencia eh: Leste");
			break;
		}	
		case 10:{
			printf("Sua regiao de procedencia eh: Centro-Oeste");
			break;
		}
		case 11:{
			printf("Sua regiao de procedencia eh: Noroeste");
			break;
		}
		default:{
			if(codigo == 5 || codigo == 6 ){
				printf("Sua regiao de procedencia eh: Nordeste");
			}
			else{
				if(codigo == 7 || codigo == 8 || codigo == 9 ){
					printf("Sua regiao de procedencia eh: Sudeste");		
				}
				else{
					printf("Sua regiao de procedencia nao foi encontrada!!");
				}
			}			
			break;
		}
	}
}

