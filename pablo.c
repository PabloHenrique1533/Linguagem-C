#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float numero1;
	float numero2;
	float total;
	int opcao;
	int operacao;

	opcao = 0;

		while(opcao==0) {
			printf("qual operacao voce deseja fazer? \n Soma(1) \n Subtracao(2) \n Multiplacao(3) \n Divisao(4) \n ");
			scanf ("%d" , &operacao);

		switch (operacao){

			case 1:
				//soma
				printf("Digite Um Valor Para o Numero 1 \n");
				scanf("%f", &numero1);
				printf("Digite Um Valor Para O Numero 2 \n");
				scanf( "%f", &numero2);
				total = numero1 + numero2;
				printf("O Valor Total Da Soma:  %.2f \n", total);
			break;

			case 2:
				//subtracao
				printf("Digite Um Valor Para Numero 1 \n");
				scanf("%f", &numero1);
				printf("Digite Um Valor Para O Numero 2 \n");
				scanf("%f", &numero2);
				total = numero1 - numero2;
				printf("O Valor Total Da Subtracao:  %.2f \n", total);

 			break;

			case 3:
				//multiplicacao
				printf("Digite Um Valor PAra O Numero 1 \n");
				scanf("%f", &numero1);
				printf("Digite Um Valor Para O Numero 2 \n");
			if(numero2 !=0){
				scanf("%f", &numero2);
				}
			else{
			      	printf("Numero Invalido Digite Outro \n");
		                scanf("%f", &numero2);		
			        }
				total = numero1 * numero2;
				printf("O Valor Total Da Operacao:  %.2f \n", total);
				
			break;


			 case 4:			
			
				//divisao		
				printf("Digite Um Valor Para O Numero 1 \n");
				scanf("%f", &numero1);
				printf("Digite Um Valor Para O Numero 2 \n");
			if(numero2 !=0){
				scanf("%f", &numero2);
			        }
			else{
				printf("Numero Invalido Digite Outro \n");
			  	scanf("%f", &numero2);      
				}
				total = numero1 / numero2;
				printf("O Valor Total Da Operacao E:  %2.f \n", total);
		  	            

			break;
		} 
		
			printf("Deseja Continuar Os Calculos Digite 0, Deseja Encerrar Os Calculos Digite 1: ");
			scanf("%d", &opcao);

	
	}	

	return 0;
}

