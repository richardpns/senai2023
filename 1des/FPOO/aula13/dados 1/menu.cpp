#include <stdio.h>
#define SIZE 6
int pilha[SIZE];
int ponteiro = 0;
int i;

void mostrarFila(){
	printf("pilha:\n");
	for(i = 0; i < ponteiro; i++)
		printf("%d\n", pilha[i]);
} 	
int push(int dado){
	if(ponteiro < SIZE){
	pilha[ponteiro] = dado;
	ponteiro++;
	return 1;	
	} 
	else return 0;
}
int pop(){
	if(ponteiro >= 0){
		ponteiro--;
		return 1;
	}else
		return 0;
	 
}

int main(){
	int op = 0;
	do{
		printf("escolha uma opção:\n 1. adicionar\n 2. remover\n 0. sair\n");
		scanf("%d", &op);
		if(op == 1){
			printf("digite um numero inteiro: ");
			scanf("%d", &x);
			push(x);
			mostraFila();			
		}else if (op == 2){
			pop();
			mostrarFila();		
		}
		
		
	}while(op != 0); 
	  
}
