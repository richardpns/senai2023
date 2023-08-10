#include <iostream>
#include <string>

int main() {
    std::string nomeMercadoria;
    double precoMercadoria, aumentoPercentual;

    // Leitura do nome da mercadoria
    std::cout << "Digite o nome da mercadoria: ";
    getline(std::cin, nomeMercadoria);

    // Leitura do preço da mercadoria
    std::cout << "Digite o preço da mercadoria: ";
    std::cin >> precoMercadoria;

    // Cálculo do aumento de 5%
    aumentoPercentual = 5.0;
    double novoPreco = precoMercadoria + (precoMercadoria * aumentoPercentual / 100);

    // Apresentação dos resultados
    std::cout << "\nNome da mercadoria: " << nomeMercadoria << std::endl;
    std::cout << "Novo preço: R$ " << novoPreco << std::endl;

    return 0;
}

