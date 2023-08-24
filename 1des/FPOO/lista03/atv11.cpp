#include <stdio.h>
int main() {
    
	int numeros[5];

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
}
    for (int i = 0; i < 4; i++) 
    for (int j = 0; j < 4 - i; j++) 
        if (numeros[j] > numeros[j + 1]) {
        int temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
}
    printf("Os números em ordem crescente são:\n");
    for (int i = 0; i < 5; i++) 
        printf("%d ", numeros[i]);
   		printf("\n");

    return 0;
}
