#include <stdio.h>
#include <conio.h>

//3 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 4 Notas
//3 - Multiplica��o de 2 N�mero
//4 - Divis�o de 2 N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 

//Para cada op��o escolhida, o algoritmo dever� chamar a fun��o correspondente a op��o, ou seja, teremos no m�nimo 4 fun��es diferentes no algoritmo.
//Cada fun��o dever�o ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida. Retornar e exibir o resultado no programa principal.

float  media_quatro_notas(){
	float nota1, nota2, nota3, nota4, media;
	system("cls");
	printf("<<<Calcular Media de 4 Notas>>> ");
	printf("\nInforme a primeira Nota: ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda Nota: ");
	scanf("%f", &nota2);
	printf("\nInforme a terceira Nota: ");
	scanf("%f", &nota3);
	printf("\nInforme a quartaa Nota: ");
	scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
}


int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<<Calcular Idade>>> ");
	printf("\nInforme o ano atual: ");
	scanf("%d", &aa);
	printf("\nInforme o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("\nSua idade eh: %d", idade);
	system("pause");
}

int menu(){
	int opcao;
	do{
		printf("Informe a Opcao:" );
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 4 Notas:");
		printf("\n3 - Multiplicacao de 2 Numeros");
		printf("\n4 - Divisao de 2 Numeros");		
		printf("\n5 - Sair");
		printf("\nInforme a Opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				calcular_idade();
			break;
		}			
	} while (opcao != 5);	
	
}


void main(){
	menu();
}
