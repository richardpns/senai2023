#include <iostream>
#include <string>

int main() {
    std::string nomeCidade;
    int totalEleitores, totalVotos;

    // Leitura do nome da cidade
    std::cout << "Digite o nome da cidade: ";
    getline(std::cin, nomeCidade);

    // Leitura do número total de eleitores
    std::cout << "Digite o número total de eleitores: ";
    std::cin >> totalEleitores;

    // Leitura do número total de votos apurados
    std::cout << "Digite o número total de votos apurados: ";
    std::cin >> totalVotos;

    // Cálculo da porcentagem de participação
    double participacaoPercentual = (static_cast<double>(totalVotos) / totalEleitores) * 100;

    // Apresentação do resultado
    std::cout << "\nParticipação dos eleitores na cidade de " << nomeCidade << ": ";
    std::cout << participacaoPercentual << "%\n";

    return 0;
}

