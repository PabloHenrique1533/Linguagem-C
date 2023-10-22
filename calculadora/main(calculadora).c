#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


  	float numero1;
	float numero2;
	float total;
	int opcao;
	int operacao;
	
	opcao = 0;
  while(opcao==0){
                  	printf("Qual Operacao voce deseja fzr?\n Soma(1) \n Subtracao(2) \n Multiplicacao(3) \n Divisao(4) \n ");
			scanf ("%d", &operacao);
            
		switch (operacao){
			
		case 1:				
			// soma
			printf("Digie Um Valor Para o Numero 1 \n");
			scanf("%f", &numero1);
			printf("\n Digite Um Valor Para O Numero 2 \n" );
			scanf("%f", &numero2);
			total = numero1 + numero2;
			printf("O Total Da Soma: %.2f \n", total);
			
		break;
		
		
		
		case 2:
			
			//Subtração
			printf("Digite um Valor Para o Numero 1 \n");
			scanf("%f", &numero1);
			printf("Digite Um Valor Para o Numero 2 \n");
			scanf ("%f", &numero2);
			total = numero1 - numero2;
			printf("O Total Da Subtração: %.2f \n", total);
			
		
		break;
		
		
		
		case 3:
			//Multiplicação
			printf("Digite um Valor Para o Numero 1 \n");
			scanf("%f", &numero1);
			printf("Digite Um Valor Para o Numero 2 \n");
			scanf ("%f", &numero2);
			total = numero1 * numero2;
			printf("O Total Da Multiplicação: %.2f \n", total);
			
			
		break;
		
		
		case 4:
			//Divisão
			printf("Digite um Valor Para o Numero 1 \n");
			scanf("%f", &numero1);
			printf("Digite Um Valor Para o Numero 2 \n");
			scanf ("%f", &numero2);
			total = numero1 / numero2;
			printf("O Total Da Divisão: %.2f \n", total);
		break;
		
		
	}
	
		printf("Deseja Continuar Os Calculos Digite 0, Deseja Encerrar Os Calculos Digite 1:");
		scanf("%d", &opcao);
}	
  	
  return 0;
}
