#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicita ao usu�rio para digitar os n�meros
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Determina o maior e o menor n�mero
    int maior, menor;
    if (numero1 > numero2) {
        maior = numero1;
        menor = numero2;
    } else {
        maior = numero2;
        menor = numero1;
    }

    // Exibe o resultado
    printf("O maior numero �: %d\n", maior);
    printf("O menor numero �: %d\n", menor);

    return 0;
}

