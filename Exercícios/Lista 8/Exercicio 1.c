#include <stdio.h>
#include<conio.h>

//1.	POR VALOR - Fa�a um procedimento que receba por par�metros 2 valores. O usu�rio dever� escolher 
//qual op��o aritm�tica dever� ser realizado. (criar um menu com as op��es dentro do procedimento)

int menu(){
	int opcao;
	do{
		system("cls");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 2 Notas:");
		printf("\n3 - Sair");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				printf("\nIdade: %d ",calcular_idade());
			break;
			
			case 2:
				printf("\nSua Media eh: %0.2f", media_duas_notas());
			break;
			
			default:
				printf("Opcao Invalida!!");
		}	
		printf("\n\n");	
		system("pause"); 
						
	} while (opcao != 3);	
	
	
	
	
}

int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<<Calcular Idade>>> ");
	printf("\nInforme o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	return idade;
}

float  media_duas_notas(){
	float nota1, nota2, media;
	system("cls");
	printf("<<<Calcular Media de 2 Notas>>> ");
	printf("\nInforme a primeira Nota: ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda Nota: ");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	return media;
}

void main(){
 menu();		
}
