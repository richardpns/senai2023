#include <stdio.h>
#include <stdlib.h>
struct Lista{
    int dado;
    struct Lista *prox;
};
struct Lista *inicio = NULL;
struct Lista *fim = NULL;
struct Lista *aux = NULL;
void mostraLista(){
    aux = inicio;
    printf("Lista:\n");
    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}
int push(int dado){
    aux = (struct Lista*) malloc(sizeof(struct Lista));
    if(aux == NULL) return 0;
    aux->dado = dado;
    aux->prox = NULL;
    if(inicio == NULL){
        inicio = aux;
        fim = aux;
    }else{
        fim->prox = aux;
        fim = aux;
    }
    return 1;
}

int slice(int index){
    int i;
    aux = inicio;
    if(index == 0){
        inicio = inicio->prox;
        free(aux);
        return 1;
    }else{
        for(i = 0; i < index-1; i++){
            aux = aux->prox;
        }
        struct Lista *aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
        return 1;
    }
    return 0;
}

int main(){
	int op = 0;
	int x;
	do{
		printf("escolha uma opção:\n 1. adicionar\n 2. remover\n 0. sair\n");
		scanf("%d", &op);
		if(op == 1){
			printf("digite um numero inteiro: ");
			scanf("%d", &x);
			push(x);
			mostra1Lista();			
		}else if (op == 2){
			printf("digite um numero inteiro: ");
			scanf("%d", &x);
			slice(x);
			mostraLista();		
		}
		
		
	}while(op != 0); 
	  
}
