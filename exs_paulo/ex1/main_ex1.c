#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n ,i, j, a, numero[4];
	
	printf("Digite 4 Numeros distintos e inteiros: \n");		
		for(n = 0; n < 4; n++){
			scanf("%d", &numero[n]);
		}
			for(n = 0; n < 4; n++){
				for(j = n; j < 4; j++){
					if(numero[n] < 0 || numero[n]== numero[i] ){
						printf("Numero distintos e negativos:");
						exit(0);
					}
				}
			}
				for(i = 0; i < 4; i++){
					for(j = i + 1; j < 4; j++){
						if (numero[i] < numero[j]){
							a = numero[i];
							numero[i] = numero[j];
							numero[j]= a;
						}
					}		
				}
			
			printf("os numeros distintos e positivos na ordem descrecente: \n");
				for (i = 0; i < n; ++i){
	   			 printf("%d\n", numero[i]);
	   		}
	return 0;
}
