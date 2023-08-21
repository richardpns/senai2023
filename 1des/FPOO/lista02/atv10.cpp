#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    // Solicita as três notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3;
    
    // Verifica a situação do aluno de acordo com a média
    if (media >= 6) {
        printf("Situação: Aprovado\n");
    } else if (media >= 4) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}

