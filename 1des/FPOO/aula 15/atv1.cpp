#include <stdio.h>
#include <locale.h>
#include <string.h>

	FILE *entrada;
	char entry[] = "entrada.csv";

int main(){
	char linha[100];
	entrada = fopen ("entrada.csv", "r");
	while(fgets(linha, 100, entrada)!= NULL){
		printf("%s", linha);
	}
	fclose(entrada);	

	
	return 0;
}
