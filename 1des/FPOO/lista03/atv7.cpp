#include <stdio.h>
#include <string.h>
	int main(){
		int soma = 0;
	
		for (int i = 0; i <= 100; i++){
			soma += i;
		}
		
		printf("a soma dos numeros entre 0 e 100 e: %d\n", soma);
		
		return 0;
}
