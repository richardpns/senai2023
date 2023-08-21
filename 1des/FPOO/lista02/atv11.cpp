#include <stdio.h>
#include <string.h>

int main() {
    char peca[20];
    float preco, desconto, preco_final;

    // Solicita a peça
    printf("Digite a peça (camisa, bermuda, calca): ");
    scanf("%s", peca);

    // Solicita o preço da peça
    printf("Digite o preço da peça: ");
    scanf("%f", &preco);

    // Calcula o desconto de acordo com a peça
    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20; // 20% de desconto para camisa
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10; // 10% de desconto para bermuda
    } else if (strcmp(peca, "calca") == 0) {
        desconto = 0.15; // 15% de desconto para calça
    } else {
        printf("Peça inválida.\n");
        return 0;
    }

    // Calcula o preço final com o desconto
    preco_final = preco - (preco * desconto);

    // Exibe o valor final da venda
    printf("Valor final da venda: %.2f\n", preco_final);

    return 0;
}

