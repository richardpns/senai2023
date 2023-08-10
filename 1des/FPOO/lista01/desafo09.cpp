#include <iostream>
#include <string>

int main() {
    std::string nomeMercadoria;
    double precoMercadoria, aumentoPercentual;

    // Leitura do nome da mercadoria
    std::cout << "Digite o nome da mercadoria: ";
    getline(std::cin, nomeMercadoria);

    // Leitura do pre�o da mercadoria
    std::cout << "Digite o pre�o da mercadoria: ";
    std::cin >> precoMercadoria;

    // C�lculo do aumento de 5%
    aumentoPercentual = 5.0;
    double novoPreco = precoMercadoria + (precoMercadoria * aumentoPercentual / 100);

    // Apresenta��o dos resultados
    std::cout << "\nNome da mercadoria: " << nomeMercadoria << std::endl;
    std::cout << "Novo pre�o: R$ " << novoPreco << std::endl;

    return 0;
}

