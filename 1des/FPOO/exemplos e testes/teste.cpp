#include <stdio.h>
/*programa que le um numero e informa se e par ou impar*/
//"%" pode ser usado para pegar o resto da divisão
int main()
{
	//declaração de variaveis 
	int a, b;
	//entrada de dados 
	printf("digite um numero inteiro:");
	scanf("%d", &a);
	//processamento (resto de divisao inteira)
	b = a % 2;
	//saida com condicional SES o resto for 1 e impar,senao e par 
	if(b) printf("impar");
	else printf("par");
	return 0;
}
