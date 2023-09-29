#include <stdio.h>
#include <conio.h>

//2.	Carregar uma matriz 4x4 com n�meros fornecidos pelo usu�rio. Ao final ler
//um n�mero informado pelo usu�rio e procurar se o mesmo est� na matriz.

#define TC 2
#define TL 2 

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){ 
			printf("Informe Matriz: ");
			scanf("%d", &mat[l][c]);
		}	
	}	
}

void exibir_matriz(int mat[TL][TC]){
		int l, c;
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);
		}	
	}		
}

void verificador(int mat[TL][TC]){
	int l, c, verif, linha, coluna, cont = 0;
	printf("\n\nInforme um numero para ser procurado: ");
	scanf("%d", &verif);
	
	for(l=0;l<TL;l++){ 
		for(c=0;c<TC;c++){
			if(mat[l][c] == verif){
				linha = l;
				coluna = c;
				printf("\n\nNumero encontrado na linha %d e na coluna %d", linha, coluna);
				cont++;
			}
			else{
			}
		}	
	}
	if(cont == 0){
		printf("\n\nNumero nao encontrado na matriz !");
	}		
	else{
	}
}
	

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	verificador(mat);
}
