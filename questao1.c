// 1) Observe o trecho de código abaixo: int INDICE = 13, SOMA = 0, K = 0;
// Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
// Imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA?

#include <stdio.h>

void Imprimir(int SOMA) {
    printf("SOMA: %d\n", SOMA);
}

int main() {
    int INDICE = 13, SOMA = 0, K = 0;
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    Imprimir(SOMA);
    return 0;
}

// Resposta: SOMA: 91