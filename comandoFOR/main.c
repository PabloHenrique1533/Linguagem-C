#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int lista[10];
	int num;
	
	printf("digite 10 numeros:\n");
	for(num=0; num<=9; num++){	
		scanf("%d", &lista[num]);	
	}	
	printf("monstrando os numeros dobrados \n");
	for(num=0; num<=9; num++){
		lista[num]=lista[num]*2;
		printf("numero %d = [%d] \n",num, lista[num]);
	}
	return 0;
}
