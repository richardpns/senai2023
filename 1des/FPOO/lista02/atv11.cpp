#include <stdio.h>
#include <string.h>

int main() {
    char peca[20];
    float preco, desconto, preco_final;

    // Solicita a pe�a
    printf("Digite a pe�a (camisa, bermuda, calca): ");
    scanf("%s", peca);

    // Solicita o pre�o da pe�a
    printf("Digite o pre�o da pe�a: ");
    scanf("%f", &preco);

    // Calcula o desconto de acordo com a pe�a
    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20; // 20% de desconto para camisa
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10; // 10% de desconto para bermuda
    } else if (strcmp(peca, "calca") == 0) {
        desconto = 0.15; // 15% de desconto para cal�a
    } else {
        printf("Pe�a inv�lida.\n");
        return 0;
    }

    // Calcula o pre�o final com o desconto
    preco_final = preco - (preco * desconto);

    // Exibe o valor final da venda
    printf("Valor final da venda: %.2f\n", preco_final);

    return 0;
}

