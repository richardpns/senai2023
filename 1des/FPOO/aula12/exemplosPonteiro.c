#include <stdio.h>

//Procedimento que recebe um vetor e um indice e grava 0 na posi??o indicada
void zeraElemento(int *ponteiro, int indice){
	ponteiro[indice] = 0;		
}

//Procedimento apenas para mostrar o conte?do de um vetor
void mostraVetor(int *ponteiro, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d [%02d]\n", i , ponteiro[i]);
}

int main(){
	int numeros[] = {10, 8, 7, 3, 40, 50, 34, 231};
	zeraElemento(numeros, 0);
	mostraVetor(numeros, 8);
	return 0;
}
