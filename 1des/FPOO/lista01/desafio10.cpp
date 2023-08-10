#include <iostream>
#include <string>

int main() {
    std::string nomeCidade;
    int totalEleitores, totalVotos;

    // Leitura do nome da cidade
    std::cout << "Digite o nome da cidade: ";
    getline(std::cin, nomeCidade);

    // Leitura do n�mero total de eleitores
    std::cout << "Digite o n�mero total de eleitores: ";
    std::cin >> totalEleitores;

    // Leitura do n�mero total de votos apurados
    std::cout << "Digite o n�mero total de votos apurados: ";
    std::cin >> totalVotos;

    // C�lculo da porcentagem de participa��o
    double participacaoPercentual = (static_cast<double>(totalVotos) / totalEleitores) * 100;

    // Apresenta��o do resultado
    std::cout << "\nParticipa��o dos eleitores na cidade de " << nomeCidade << ": ";
    std::cout << participacaoPercentual << "%\n";

    return 0;
}

