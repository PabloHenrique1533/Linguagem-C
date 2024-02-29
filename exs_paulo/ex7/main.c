#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {			
	int  i, fatumen[10], num_merca[10], quant_vendidas[10], faturamento = 0;
	int precos[10][2]; 
		
		printf("informe os precos: \n"); 
		for(i = 0; i < 10 -1; i++){
			scanf("%d ", &precos[i]);		
		}		
		
		printf("informe os numeros de mercadoria \n");
		for(i = 0; i < 9 -1; i++){
			scanf("%d ", &num_merca[i]);
		}
		
		printf("informe as quantidades de venda \n");
		for(i = 0; i < 10 -1; i++){
			scanf("%d", &quant_vendidas[i]); 
		}
		
		//faturamento
		for(i = 0; i < 10 -1; i++){
			if(quant_vendidas[i] > 0){
				faturamento +=  precos[i][0] * quant_vendidas[i];
			}
		}
		
		printf("faturamento total %d \n", faturamento);
	return 0;
}
	
