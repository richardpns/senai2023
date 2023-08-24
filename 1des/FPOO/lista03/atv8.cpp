#include <stdio.h>
#include <string.h>
	
	int main(){
		
		int num, fatorial = 1;
		
		printf("Digite um numero inteiro positivo  ");
		scanf("%d" ,&num);

		for (int i = 1; i <= num; i++){
			fatorial *= i;
		}
		
		printf("O fatorial de %d e: %d\n", num, fatorial);
		
		return 0;
	}
