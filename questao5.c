#include <stdio.h>
#include <string.h>

int main() {
    // Declaração e inicialização da string
    char string[] = "Hello, World!";
    int tam = strlen(string); 

    // Impressão da string original
    printf("String original: %s\n", string);

    // Inverter os caracteres da string
    for (int i = 0; i < tam / 2; i++) {
        char aux = string[i];
        string[i] = string[tam - i - 1]; // Troca o caractere da posição i com o caractere da posição tam - i - 1
        string[tam - i - 1] = aux; // Troca o caractere da posição tam - i - 1 com o caractere da posição i
    }

    // Impressão da string invertida
    printf("String invertida: %s\n", string);

    return 0;
}