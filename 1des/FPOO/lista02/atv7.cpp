#include <stdio.h>

int main() {
    int numeros[5];

    // Solicita ao usuário para digitar os números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordena os números em ordem crescente usando if, else if e else
    int temp;
    if (numeros[0] > numeros[1]) {
        temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
    if (numeros[1] > numeros[2]) {
        temp = numeros[1];
        numeros[1] = numeros[2];
        numeros[2] = temp;
    }
    if (numeros[2] > numeros[3]) {
        temp = numeros[2];
        numeros[2] = numeros[3];
        numeros[3] = temp;
    }
    if (numeros[3] > numeros[4]) {
        temp = numeros[3];
        numeros[3] = numeros[4];
        numeros[4] = temp;
    }

    // Exibe os números em ordem crescente
    printf("Números em ordem crescente: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

