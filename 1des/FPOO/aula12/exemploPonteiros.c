#include <stdio.h>
#include <locale.h>
//Função que retorna a soma de dois parametros inteiros
int soma(int a, int b){
	return a + b;
}

//Funcao que retorna a media de dois parametros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

//Exemplo de um procedimento que escreve uma frase 100 vezes
void procedimentoBart(){
	int i;
	for(i = 0; i < 100; i++)
		printf("Nao vou atormentar a Lisa\n");
}

//Procedimento que escreve uma frase qualquer N vezes
void frases(char *frase, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%s\n", frase);
}

//Fun??o que calcula a m?dia de 3 notas
float media3(float a, float b, float c){
	return (a + b + c) / 3;
}

//Fun??o que calcula a m?dia de N notas
float mediaN(float notas[], int n){
	float total = 0;
	int i;
	for(i = 0; i < n; i++)
		total += notas[i];
	return total / n;
}

int main(){
	setlocale(LC_ALL,"");
	printf("%d\n", soma(123,44));
	printf("A media das notas 100 e 75 e %d\n", media(100,75));
	frases("palmeiras nao te mundial", 1);
	float notas[] = {100, 20, 50};
	float media = mediaN(notas, 5);
	printf("Notas: 100, 80, 30, 100, 45 media:%1.f\n", media);
	return 0;
}
