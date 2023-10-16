#include <stdio.h>

int main() {
    FILE *entrada = fopen("esquerda.in", "r");
    FILE *saida = fopen("esquerda.out", "w");
    
    while (1) {
        int n;
        fscanf(entrada, "%d", &n);
        
        if (n == 0) {
            break;
        }
        
        char comandos[n + 1];  // +1 para incluir o caractere nulo no final
        fscanf(entrada, "%s", comandos);
        
        char direcao = 'N';  // Inicialmente, o recruta está voltado para o norte
        
        for (int i = 0; i < n; i++) {
            if (comandos[i] == 'E') {
                // Gira 90 graus à esquerda
                if (direcao == 'N') {
                    direcao = 'O';
                } else if (direcao == 'O') {
                    direcao = 'S';
                } else if (direcao == 'S') {
                    direcao = 'L';
                } else {
                    direcao = 'N';
                }
            } else {
                // Gira 90 graus à direita
                if (direcao == 'N') {
                    direcao = 'L';
                } else if (direcao == 'L') {
                    direcao = 'S';
                } else if (direcao == 'S') {
                    direcao = 'O';
                } else {
                    direcao = 'N';
                }
            }
        }
        
        fprintf(saida, "%c\n", direcao);
    }
    
    fclose(entrada);
    fclose(saida);
    
    return 0;
}

