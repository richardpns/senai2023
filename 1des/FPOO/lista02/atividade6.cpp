#include <stdio.h>

int main() {
    int numeros[6];
    int maior;

    // Solicita ao usu�rio para digitar os n�meros
    for (int i = 0; i < 6; i++) {
        printf("Digite o %d� numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa a vari�vel "maior" com o primeiro n�mero digitado
    maior = numeros[0];

    // Encontra o maior n�mero entre os digitados
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Exibe o maior n�mero
    printf("O maior n�mero digitado foi: %d\n", maior);

    return 0;
}

