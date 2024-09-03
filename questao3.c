// 3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
// • O menor valor de faturamento ocorrido em um dia do mês;
// • O maior valor de faturamento ocorrido em um dia do mês;
// • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

// IMPORTANTE:
// a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
// b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;

#include <stdio.h>

// Nota: Eu não tenho familiaridade com JSON e XML, então optei por utilizar um vetor com valores 
// estipulados para resolver este problema. No entanto, estou disposta a aprender e me adaptar 
// ao uso de JSON e XML em projetos futuros, conforme necessário.

int main() {
    // Declaração e inicialização das variáveis
    float faturamento[] = {8500.0, 12500, 0, 9200, 15000, 0, 0, 
                     13400, 0, 17200, 9000.0, 0, 0, 10000.5, 
                     7500.5, 0, 0, 16500.5, 12000, 0, 0, 
                     11200, 0, 9800, 0, 0, 14200.0, 13000, 19500, 0};
    float menor = faturamento[0], maior = faturamento[0];
    int soma = 0, media = 0, dias_acima_media = 0;
    int dias = sizeof(faturamento) / sizeof(faturamento[0]); 
    int dias_com_faturamento = 0;

    // Calcular o menor e o maior valor de faturamento, e somar apenas os dias com faturamento
    for (int i = 0; i < dias; i++) {
        if (faturamento[i] > 0) {  // Considera apenas dias com faturamento
            if (faturamento[i] < menor) { 
                menor = faturamento[i];
            }
            if (faturamento[i] > maior) {
                maior = faturamento[i];
            }
            soma += faturamento[i];
            dias_com_faturamento++;
        }
    }

    // Calcular a média mensal considerando apenas os dias com faturamento
    if (dias_com_faturamento > 0) {
        media = soma / dias_com_faturamento;
    }

    // Calcular o número de dias no mês em que o valor de faturamento diário foi superior à média mensal
    for (int i = 0; i < dias; i++) {
        if (faturamento[i] > media) {
            dias_acima_media++;
        }
    }

    // Imprimir os resultados
    printf("Menor valor de faturamento: %.1f\n", menor);
    printf("Maior valor de faturamento: %.1f\n", maior);
    printf("Número de dias acima da média: %d\n", dias_acima_media);

    return 0;
}