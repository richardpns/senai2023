#include <iostream>

int main() {
    int n;

    // Leitura do n�mero inteiro
    std::cout << "Digite um n�mero inteiro positivo e diferente de zero: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "N�mero inv�lido. Por favor, insira um n�mero inteiro positivo e diferente de zero." << std::endl;
    } else {
        // C�lculos e apresenta��o dos resultados
        int nMenosUm = n - 1;
        int nMaisUm = n + 1;

        std::cout << "n - 1 = " << nMenosUm << std::endl;
        std::cout << "n + 1 = " << nMaisUm << std::endl;
    }

    return 0;
}

