#include <stdio.h>

// Função para imprimir o valor da variável SOMA
void Imprimir(int SOMA) {
    printf("SOMA: %d\n", SOMA);
}

int main() {
    // Declaração e inicialização das variáveis
    int INDICE = 13, SOMA = 0, K = 0;

    // Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    // Impressão do valor da variável SOMA
    Imprimir(SOMA);

    return 0;
}

// Resposta: SOMA = 91