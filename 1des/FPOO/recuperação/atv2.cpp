#include <stdio.h>
#include <string.h>
int main(){
	int n[3], media;
	

	printf("Digite tres numeros para calcular a media: ");
	scanf("%d %d %d", &n[1], &n[2], &n[3]);	

	media = (n[1] + n[2] + n[3]) / 3;
	printf("A media e: %d", media);
	
	
	
	return 0;
}
