// Guilherme de Moura Santos 2110362
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

comparador(int i,int programa[],int logica[],int tamanho){
	int seg=0;
	
	for(int j=0; j<tamanho; j++){
			
		if(programa[i]==logica[j]){
			
			seg=programa[i];
			printf("                     [%i]",seg);
		}
		seg=0;
	}
}
main(){
	
	setlocale(LC_ALL,"portuguese");

	int l=5, p=3;
	
	int logica[l];

	int  programa[p];

	printf("OBS: não repita o numero de matricula em uma mesma disciplina \n");
	
	printf("Informe o número de matricula dos alunos de Lógica: \n");
	
	for(int i=0; i<l; i++){
		printf("MATRICULA %i:  ", i+1);
		scanf("%i",&logica[i]);
	}
	printf("Informe o número de matricula dos aluno de Programação: \n");
	
	for(int i=0; i<p; i++){
		printf("MATRICULA %i:  ", i+1);
		scanf("%i",&programa[i]);
	}
	
	printf(" Lógica \t Linguagem de programação \t   iguais \n");
	
	for(int i=0; i<l; i++){
		if(i < p){
			printf("\n   [%i]", logica[i]);
			printf("\t\t\t    [%i]", programa[i]);
			comparador( i, programa, logica, l);
		}else{
			printf("\n   [%i]\t",logica[i]);
		}
	
	}
	
}
