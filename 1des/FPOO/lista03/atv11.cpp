#include <stdio.h>
int main() {
    
	int numeros[5];

    printf("Digite 5 n�meros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
}
    for (int i = 0; i < 4; i++) 
    for (int j = 0; j < 4 - i; j++) 
        if (numeros[j] > numeros[j + 1]) {
        int temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
}
    printf("Os n�meros em ordem crescente s�o:\n");
    for (int i = 0; i < 5; i++) 
        printf("%d ", numeros[i]);
   		printf("\n");

    return 0;
}
