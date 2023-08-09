#include <stdio.h>
int main(){
	int raio, altura;
	int area, volume;
	int pi = 3;
	//entradas
	printf("digite o raio de um cilindro cm");
	scanf("%d" ,&raio);
	printf("o raio é %d",raio);
  
    printf("digite a altura de um cilindro cm");
	scanf("%d" ,&altura);
	printf("a altura é %d",altura);
	//processamento
	int base= 2 * pi * raio * raio;
	int lateral = 2 * pi * raio * altura;
	area = lateral + base;
	volume = pi * raio * raio * altura;
	//saidas
	printf("raio = %d\n",raio);
	printf("altura = %d\n", altura);
	printf("a area do cilindro = %d\n",area);
	printf("volume do cilindro = %d\n",volume);
	return 0;
}
