#include <stdio.h>
#include <conio.h>

//4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. Seu programa deve:

//a.	Fazer uma função que leia e retorne o salário_bruto;
//b.	Fazer uma função que leia e retorne o total de horas extras;
//c.	Fazer uma função que leia e retorne os descontos;
//d.	Fazer uma função que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora extra custa R$ 20,00;
//e.	Fazer uma função que calcule e retorne o salário bruto passando por parâmetro as informações necessárias para isso;
//f.	Fazer um procedimento que calcule e exiba o salário líquido do funcionário passando por parâmetros as informações necessárias.

//Esta empresa possui 5 funcionários, e todos precisaram ter seus salários calculados.


float salario_bruto(){
	float salariob;
	printf("Informe o salario bruto: ");
	scanf("%f", &salariob);
	return salariob;
}

float horas_extras(){
	float extras;
	printf("Informe a quantidade de horas extras: ");
	scanf("%f", &extras);
	calculo_extras(extras);
	return calculo_extras();
}

float descontos(){
	float desconto;
	printf("Informe a quantidade de descontos: ");
	scanf("%f", &desconto);
	return desconto;
}

float calculo_extras(float extras){
	float calculo_extra;
	calculo_extra = extras * 20.00;
	return calculo_extra;
}

float calculo_salario_bruto(){
	float salario_brutoo, horas_extrass;
	salario_brutoo  = salario_bruto();
	horas_extrass = horas_extras();
	salario_bruto_v = salario_brutoo + horas_extrass;
	return salario_bruto_V;
	 
}


void main(){
	salario_bruto();
	 calculo_salario_bruto();
	
}
