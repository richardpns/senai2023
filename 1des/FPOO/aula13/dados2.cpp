#include <stdio.h>
#include <locale.h>
#include <string.h>

	FILE *arquivo, *arq2;
	int numero, soma = 0;
	char nomeArquivo[] = "dados.txt";
	char nomeResult[] = "resultado.txt";

int main(){
	setlocale(LC_ALL,"");
	
	arquivo = fopen ("dados.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro, não foi possivel abrir o arquivo.\n");
		return 1;
}
	printf("Numeros do arquivo: \n");
	while (fscanf(arquivo, "%d", &numero) == 1 ){
		printf("%d ", numero);
		soma += numero;
	}
	
	fclose(arquivo);
	
	arq2 = fopen ("resultado.txt", "w");
	
	if(arquivo == NULL){
		printf("Erro\n");
		return 1; 
}
	printf("Resultado: \n");
	while (fscanf(arq2, "%d", &numero) == 1){
		
	}
		
	
	
	printf("\nA soma dos numeros e: %d\n", soma);
	
	return 0;
}
