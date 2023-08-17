#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){

printf("medidor de pressao arterial\n\n");

char nome [40];
int sis[5], dia[5];
float media = 0, mediaD = 0;
int i, dias;
printf("digite o primeiro nome\t");
scanf("%s" , &nome);

printf("digite quantos dias foram registrados\t");
scanf("%s" , &nome);

for (i= 0;i <5; i++){
	printf("\ndia %d:\n",i+1);
	printf("informe a pressao sis ");
	scanf("%d", &sis[i]);
	printf("informe a pressao dia ");
	scanf("%d", &dia[i]);
	media += sis[i];
	mediaD += dia[i];
}
//calculo media
	media /=5;
	mediaD /=5;

printf("\nDados do paciente:\n");
printf("Nome: %s\n" ,nome);
printf("Media pressao arterial registrada:\n");
printf("Sis: %.2f mmHg\n", media);
printf("Dia: %.2f mmHg\n", mediaD);
}



