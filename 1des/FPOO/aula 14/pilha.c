#include <stdio.h>
#define SIZE 6
int pilha[SIZE];
int ponteiro = 0;
int i;

void mostraPilha(){
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
	mostraPilha();
	push(25);
	mostraPilha();
	push(22);
	mostraPilha();
	push(60);
	mostraPilha();
	push(48);
	mostraPilha();
	pop(); 
    mostraPilha();
	pop(); 
	mostraPilha();
	  
}
