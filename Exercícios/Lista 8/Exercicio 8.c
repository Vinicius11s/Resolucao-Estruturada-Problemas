#include <stdio.h>
#include<conio.h>

//8.	POR REFER�NCIA: Escreva um procedimento que receba a Largura e o Comprimento do quadrado/ret�ngulo por par�metro,
//calcule e retorne tamb�m por par�metro a �rea (Area).

void calcula_area(float *larg, float *comp, float *area){
	*area = *comp * *larg;
	
}

void main(){
	float larg, comp, area;
	
	printf("<<<Este algoritmo caclcula a area de um quadrado/retangulo>>>\n");
	printf("\nInforme a Largura: ");
	scanf("%f", &larg);	
	printf("\nInforme o Comprimento: ");
	scanf("%f", &comp);
	
	calcula_area(&larg, &comp, &area);
	
	printf("\nA Area calculada foi: %0.2f", area);
}
