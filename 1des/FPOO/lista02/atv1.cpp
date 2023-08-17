#include <stdio.h>
int main(){
	
	float produto ,np;
	float desconto = 00.8;
	
	printf("Digite o preco do produto");
	scanf("%f" ,&produto);
	
	if (produto >= 1000)
	np = produto * desconto; 
	printf("com o desconto de 8%% fica: %.2f" ,np);
	
	
	return 0;
}
