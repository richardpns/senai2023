#include <stdio.h>
#include <string.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL,"");
		char nome[5][20];
		float salario[5], reajuste, NVsa[5];
		int i;
		int escolha;
			//escolha de reajuste
		
		
			printf("\n\n ----------------------- ");

			printf("\n 1 - Reajuste com desconto ");
			printf("\n 2 - Reajuste com aumento ");
			printf("\n 3 - Fechar programa\n ");
			scanf("%d",&escolha);
		
			// estrutura switch
				switch (escolha) {
				
				case 1:
				{
				
			
				printf("\n\n Opcao escolhida: 1 \n");
				printf("Digite a porcentagem de reajuste (ex: 00,07 = 7%%):\n ");
				scanf("%f" ,&reajuste);
				
					for(i = 0; i < 5; i++){
				printf("Digite o nome do funcionario\n %d: ", i + 1);
					scanf("%s", &nome[i]);
				printf("Digite o salario do funcionario\n %d: ", i + 1);
					scanf("%f", &salario[i]);	
				}
					for(i = 0; i < 5; i++){
					NVsa[i] = (salario[i] * reajuste)/100; 
					
					printf("%dº  Nome: %s Salario: %2.f\n", i + 1, nome[i], NVsa[i]);
				}
				
				
				break;
				}
				
				case 2:
				{
		
				printf("\n\n Opcao escolhida: 2 ");
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
