#include <stdio.h>

int main() {
    int numeros[6];
    int maior;

    // Solicita ao usuário para digitar os números
    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa a variável "maior" com o primeiro número digitado
    maior = numeros[0];

    // Encontra o maior número entre os digitados
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibe o maior número
    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}

