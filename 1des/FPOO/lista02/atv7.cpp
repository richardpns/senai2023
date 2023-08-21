#include <stdio.h>

int main() {
    int numeros[5];

    // Solicita ao usu�rio para digitar os n�meros
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordena os n�meros em ordem crescente usando if, else if e else
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

    // Exibe os n�meros em ordem crescente
    printf("N�meros em ordem crescente: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

