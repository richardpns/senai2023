#include <stdio.h>
int main(){
	char nome[20];
	float salario, filhos;
	
		printf("\n Salario menor que 2000, 45 por filho\n\n");
	
		printf("digite o primeiro nome do funcionario: ");
		scanf("%s" ,&nome);
		
		printf("digite o salario do funcionario: ");
		scanf("%f" ,&salario);
		
		printf("digige a quantidade de filhos do funcionario: ");
		scanf("%f" ,&filhos);
	
	
		float re = filhos * 45;
		float novoSalario;
			if (salario <2000) novoSalario = salario + re;
			printf("O seu novo salario sera: %.2f" ,novoSalario );  
			
			
	return 0;
}
