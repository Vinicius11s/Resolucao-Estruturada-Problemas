#include <stdio.h>
#include <conio.h>

//4.	Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea..

float calcular_area(float larg, float comp){
	float area;	
	area = comp * larg;
	return area;
	
}

void main(){
	float larg, comp, area;
	printf("<<<Calcular a area de um quadrado/retangulo>>>\n\n");
	printf("Informe a Largura: ");
	scanf("%f", &larg);
	printf("Informe o Comprimento: ");
	scanf("%f", &comp);
	area = calcular_area(larg, comp); 
	printf("A Area eh: %0.2f", area);	
}
