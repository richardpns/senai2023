#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    // Solicita as tr�s notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Calcula a m�dia das notas
    media = (nota1 + nota2 + nota3) / 3;
    
    // Verifica a situa��o do aluno de acordo com a m�dia
    if (media >= 6) {
        printf("Situa��o: Aprovado\n");
    } else if (media >= 4) {
        printf("Situa��o: Recupera��o\n");
    } else {
        printf("Situa��o: Reprovado\n");
    }

    return 0;
}

