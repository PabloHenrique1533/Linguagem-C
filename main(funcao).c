#include <stdio.h>
#include <stdlib.h>
#include "blibioteca.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 
	int v1, v2, resultado, opcao, operacao;
	
	opcao =0;
	while(opcao==0){
		
		//Escolhendo a Operação.
		printf("Qual Operacao Voce Deseja Fazer: \n Soma(1) \n Subtracao(2) \n Multiplicacao(3) \n Divisao(4) \n");
		scanf("%d", &operacao);
		
		//Pedindo os Numeros.	
			printf("Digite Um Numero: \n");
			scanf("%d", &v1);
			printf("Digite Segundo Numero: \n");
			scanf("%d", &v2);
			
		//chamando a função.	
		switch (operacao){	
			
		case 1:	
			resultado = soma (v1, v2);
		break;
		
		case 2:
			resultado = subtracao (v1, v2);
		break;
		
		case 3:
			resultado = multiplicacao (v1, v2);
		break;
		
		case 4:
			resultado = divisao (v1, v2);
		break;
}
		printf("O Resultado e: %d\n", resultado);
				
		printf("Deseja Encerra A Calculadora? \n Sim(1) \n Nao(0)");
		scanf("%d", &opcao);
}
	return 0;
}
