#include <stdio.h>

int main() {
    int num;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O valor deve ser positivo.\n");
        return 1;
    }

    printf("Valores ímpares entre 0 e %d:\n", num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

