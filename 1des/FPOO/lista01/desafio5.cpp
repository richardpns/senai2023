#include <iostream>

int main() {
    int n;

    // Leitura do número inteiro
    std::cout << "Digite um número inteiro positivo e diferente de zero: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Número inválido. Por favor, insira um número inteiro positivo e diferente de zero." << std::endl;
    } else {
        // Cálculos e apresentação dos resultados
        int nMenosUm = n - 1;
        int nMaisUm = n + 1;

        std::cout << "n - 1 = " << nMenosUm << std::endl;
        std::cout << "n + 1 = " << nMaisUm << std::endl;
    }

    return 0;
}

