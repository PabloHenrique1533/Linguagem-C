#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[4], j, i, media, resultado;
	resultado = 0;
	media = 0;
	//pedindo pro usuario inserir os numeros;
	printf("digite 4 numeros inteiros e positivos: \n");
	for(i = 0; i < 4; i++){
		scanf("%d", &num[i]);
		
		if(num < 0 ){
			printf("numeros negativo \n");
			exit(0);
		}
	} 

	
	for(i = 0; i < 4; i++){
		j = num[i] + j;
	}
	media = j /4;
		for(i = 0; i < 4; i++){
			if(num[i] > media ){
        		resultado ++; 
  	  		}	
		}

	printf("a media e %d, %d numeros sao maiores que a media", media, resultado);	
	return 0;
}
