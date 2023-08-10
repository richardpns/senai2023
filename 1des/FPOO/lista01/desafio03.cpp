#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    double salario, percentualReajuste;

    // Leitura do nome e do salário
    cout << "Digite o nome da pessoa: ";
    getline(cin, nome);

    cout << "Digite o salário da pessoa: ";
    cin >> salario;

    // Leitura do percentual de reajuste
    cout << "Digite o percentual de reajuste do salário (%): ";
    cin >> percentualReajuste;

    // Cálculo do novo salário
    double novoSalario = salario + salario * (percentualReajuste / 100);

    // Apresentação dos resultados
    cout << "\nNome: " << nome << endl;
    cout << "Salário antigo: R$ " << salario << endl;
    cout << "Novo salário: R$ " << novoSalario << endl;

    return 0;
}
