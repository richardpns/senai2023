#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int n, i;

    printf("Digite o n?mero total de doadores: ");
    scanf("%d", &n);

    char nomes[n][100];
    int idades[n];
    char sexos[n];
    int dias[n];

    for (i = 0; i < n; i++) {
        printf("\nDados do doador %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[i]);

        printf("Dias desde a ?ltima doa??o: ");
        scanf("%d", &dias[i]);
    }

    printf("\nRelat?rio de Doadores:\n");
    printf("======================\n");

    for (i = 0; i < n; i++) {
        char status[10];

        if ((sexos[i] == 'M' || sexos[i] == 'm') && dias[i] >= 60) {
            strcpy(status, "apto");
        } else if ((sexos[i] == 'F' || sexos[i] == 'f') && dias[i] >= 90) {
            strcpy(status, "apto");
        } else {
            strcpy(status, "inapto");
        }

        printf("Nome: %s\n", nomes[i]);
        printf("Status: %s\n\n", status);
    }

    return 0;
}

