#include <stdio.h>
#include <string.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL,"");
		char nome[5][20];
		float salario[5], reajuste, NVsa, aumento;
		int i;
		int escolha;
			//escolha de reajuste
		
		
			printf("\n\n ----------------------- ");

			printf("\n 1 - Reajuste salarial ");
			printf("\n 2 - Desconto ");
			printf("\n 3 - Fechar programa\n ");
			printf("-----------------------\n ");
			scanf("%d",&escolha);
		
		
			// estrutura switch
				switch (escolha) {
				
				case 1:
				{
				
			
				printf("\n\n Opcao escolhida: 1 \n\n");
				
					for(i = 0; i < 5; i++){
				printf("\nDigite o nome do funcionario\n %d: ", i + 1);
					scanf("%s", &nome[i]);
				printf("Digite o salario do funcionario\n %d: ", i + 1);
					scanf("%f", &salario[i]);	
				}
				
				printf("\n\nDigite a porcentagem de reajuste (ex:7%%):\n ");
					scanf("%f" ,&reajuste);
				printf("\n\n -----------------------\n");
					
					for(i = 0; i < 5; i++){
					NVsa = salario[i] + (salario[i] * reajuste / 100);
					
					printf("Nome: %s Salario: %2.f\n", nome[i], NVsa);
				}
				
				
				break;
				}
				
				case 2:
				{
		
					printf("\n\n Opcao escolhida: 2 \n\n");
				
					for(i = 0; i < 5; i++){
				printf("\nDigite o nome do funcionario\n %d: ", i + 1);
					scanf("%s", &nome[i]);
				printf("Digite o salario do funcionario\n %d: ", i + 1);
					scanf("%f", &salario[i]);	
				}
				
				printf("\n\nDigite a porcentagem do desconto salarial (ex:7%%):\n ");
					scanf("%f" ,&reajuste);
				printf("\n\n -----------------------\n");
					
					for(i = 0; i < 5; i++){
					NVsa = salario[i] - (salario[i] * reajuste / 100);
					
					printf("Nome: %s Salario: %2.f\n", nome[i], NVsa);
				}				
				
				break;
				}
				
				default:
					{
					if( escolha==3)
					printf("\n\n Nenhuma opcao foi escolhida ");
					break;
					}
				
			}			
		
	
	return 0;
	}
