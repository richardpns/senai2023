#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicita ao usuário para digitar os números
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Determina o maior e o menor número
    int maior, menor;
    if (numero1 > numero2) {
        maior = numero1;
        menor = numero2;
    } else {
        maior = numero2;
        menor = numero1;
    }

    // Exibe o resultado
    printf("O maior numero é: %d\n", maior);
    printf("O menor numero é: %d\n", menor);

    return 0;
}

