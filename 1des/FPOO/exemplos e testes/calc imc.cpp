#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	//Cabe�alho
	setlocale(LC_ALL,"");
	printf("Calculadora de IMC(�ndice de Massa Corp�rea)\n\n");
	//Delcara��o de vari�veis
	char nome[40], sobrenome[20];
	float peso, altura, imc;
	int continuar = 1;
	while(continuar){
		//Entrada
		printf("Digite o primeiro nome e apenas um sobrenome do paciente: ");
		scanf("%s %s", &nome, &sobrenome);
		printf("Digite seu peso em kg e altura em metros utilzando v�rgula como decimal e separado por espa�os: ");
		scanf("%f %f", &peso, &altura);
		//Processamento
		imc = peso / (altura * altura);
		//Concatenando o nome com um espa�o e o sobrenome
		strcat(nome," ");
		strcat(nome,sobrenome);
		//Sa�da e mais processamento condicional
		printf("%s imc = %.2f\n", nome, imc);
		if(imc < 18.5) printf("Abaixo do peso normal.\n");
		else if(imc < 25) printf("Peso normal\n");
		else if(imc < 30) printf("Acima do peso normal.\n");
		else if(imc < 35) printf("Obesidade classe I.\n");
		else if(imc < 40) printf("Obesidade classe II.\n");
		else printf("Obesidade classe III.\n");
		//Finaliza��o
		printf("\nDigite 1 para continuar ou 0 para sair: ");
		scanf("%d",&continuar);
	}
	return 0;
}
