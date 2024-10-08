#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    int num, a = 0, b = 1, prox = 0;

    // Ler o número informado pelo usuário
    printf("Informe um número: ");
    scanf("%d", &num);

    // Verificar se o número informado é 0 ou 1
    if (num == 0 || num == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
        return 0;
    }

    // Gerar a sequência de Fibonacci
    while (prox < num) {
        prox = a + b;
        a = b;
        b = prox;
    }

    // Verificar se o número informado pertence à sequência
    if (prox == num) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}