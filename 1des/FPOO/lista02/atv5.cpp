#include <stdio.h>
int main(){
	
	char nome[30];
	float preco, novoPreco;
	
		printf("\n digite o preco do produto separando os decimais com '.'\n\n");

	printf("Digite o nome do produto  ");
	scanf("%s" ,&nome);
	
	printf("Digite o preco do produto  ");
	scanf("%f" ,&preco);
	
    if (preco < 1000) {
        novoPreco = preco * 1.05; // Aumento de 5%
    } else {
        novoPreco = preco * 1.07; // Aumento de 7%
    }
    
    // Exibe o nome da mercadoria e o novo preço
    printf("Nome da mercadoria: %s\n", nome);
    printf("Novo preco: %.2f\n", novoPreco);
    
	return 0;
}
