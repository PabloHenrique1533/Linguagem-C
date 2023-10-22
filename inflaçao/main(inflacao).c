#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
	//variaveis
	float total;
	float preco;
	
	//pedir os numeros 
	printf("Digite o preco do produto: \n");
	scanf ("%f", &preco);
	
	//if e else
	if(preco>=100){
		
		total=preco * 20 / 100 + preco;
}
	else{
		
		total=preco * 100 / 100 + preco;
	}
	
	//monstrando o valor
	printf("o Valor Total R$ %.2f", total);
	
	return 0;
}
