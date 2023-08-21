#include <stdio.h>

int main() {
    float salario_atual, salario_reajustado;
    
    // Solicita o sal�rio atual do funcion�rio
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);
    
    // Calcula o reajuste salarial baseado nos par�metros
    if (salario_atual >= 1500 && salario_atual < 1750) {
        salario_reajustado = salario_atual * 1.15; // 15% de aumento
    } else if (salario_atual >= 1750 && salario_atual < 2000) {
        salario_reajustado = salario_atual * 1.12; // 12% de aumento
    } else if (salario_atual >= 2000 && salario_atual < 3000) {
        salario_reajustado = salario_atual * 1.09; // 9% de aumento
    } else if (salario_atual >= 3000) {
        salario_reajustado = salario_atual * 1.06; // 6% de aumento
    } else {
        salario_reajustado = salario_atual; // Sem reajuste
    }
    
    // Exibe o sal�rio reajustado
    printf("O sal�rio reajustado �: %.2f\n", salario_reajustado);
    
    return 0;
}

