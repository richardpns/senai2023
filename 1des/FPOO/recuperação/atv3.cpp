#include <stdio.h>
#include <string.h>
int main(){
	
	char nomes[5][20];
	float notas1[10],notas2[10], medias[5];
	int i;
	for(i = 0; i < 5; i++){
		printf("Nome do aluno %d: ", i + 1);
		scanf("%s", &nomes[i]);
		printf("digite duas notas (de o a 10) ", i + 1);
		scanf("%f %f", &notas1[i], &notas2[i]);
	}
	for(i = 0; i < 5; i++){
	medias[i] = (notas1[i] + notas2[i]) / 2;
	if(medias[i] > 5)
	printf("\nAluno: %s Media: %2.f, Aluno aprovado!\n ",nomes[i], medias[i]);
	else
	printf("\nAluno: %s Media: %2.f, reprovado\n", nomes[i], medias[i]);	
		
	}
	
	return 0;
}
