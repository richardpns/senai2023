#include <stdio.h>
/*programa que avalia alunos medias*/
int main(){
	//declaracao de variaveis 
	int nota;
	int frequencia;

	//entrada de dados
	printf("digite a media final do aluno de 0 a 100");
	scanf("%d", &nota);
    
	printf("digite a porcentagem de 0 a 100 em frequencia");
	scanf("%d", &frequencia);
	//processamento e saida com condicionail
    if (nota < 20) {
    		printf("reprovado. \n");
    	}else if (nota >= 20 && nota <50){
    		printf("aluno em recuperacao. \n");
    	}else if (nota >=50 && nota <=100){
    		printf("aluno aprovado. \n");
		}else {
			printf("nota invalida. por favor coloque uma nota entre 0 e 100 .\n");
		}
   {
    if (frequencia < 75)
    	printf("reprovado. \n");
    else if (frequencia >=75 && frequencia <=100)
    		printf("aluno aprovado. \n");
   } 
	 
	//fim
	return 0;
}
