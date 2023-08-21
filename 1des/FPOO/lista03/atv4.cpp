#include <stdio.h>
#include <string.h>
int main(){
	int n1, n2;
	
	printf("digite um valor inteiro e positivo  ");
	scanf("%d" ,&n1);
	printf("digite um valor inteiro e positivo  ");
	scanf("%d" ,&n2);
	
if (n1 == n2) {
        printf("Os valores devem ser diferentes.\n");
        return 1;
    }

    printf("Valores entre %d e %d:\n", n1, n2);

    int menor = (n1 < n2) ? n1 : n2;
    int maior = (n1 > n2) ? n1 : n2;

    for (int i = menor + 1; i < maior; i++) {
        printf("%d\n", i);
    }

    return 0;
}







