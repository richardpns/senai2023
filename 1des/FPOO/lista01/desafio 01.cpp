#include <stdio.h>

float resolver_expressao(float a, float b, float c) {
	float resultado = (a + b) / c;
	return resultado;
}

int main() {
	float a, b , c;
	float resultado;
	
	//entrada de dados 
	printf("digite o valor de a: ");
	scanf("%f" , &a);
	
	printf("digite o valor de b:");
	scanf("%f" , &b);
	
	printf("digite o valor de c:");
	scanf("%f", &c);
	
	//resolvendo a expressao
	resultado = resolver_expressao(a, b, c);
	
	//exibindo o resultado
	printf("o resultado da expressao da (a + b) / c é: %.2f\n", resultado);
	return 0;
}
