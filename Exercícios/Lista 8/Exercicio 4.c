#include <stdio.h>
#include <conio.h>

//4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. Seu programa deve:

//a.	Fazer uma fun��o que leia e retorne o sal�rio_bruto;
//b.	Fazer uma fun��o que leia e retorne o total de horas extras;
//c.	Fazer uma fun��o que leia e retorne os descontos;
//d.	Fazer uma fun��o que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora extra custa R$ 20,00;
//e.	Fazer uma fun��o que calcule e retorne o sal�rio bruto passando por par�metro as informa��es necess�rias para isso;
//f.	Fazer um procedimento que calcule e exiba o sal�rio l�quido do funcion�rio passando por par�metros as informa��es necess�rias.

//Esta empresa possui 5 funcion�rios, e todos precisaram ter seus sal�rios calculados.


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
