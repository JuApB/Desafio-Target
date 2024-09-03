// 3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
// • O menor valor de faturamento ocorrido em um dia do mês;
// • O maior valor de faturamento ocorrido em um dia do mês;
// • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.
// IMPORTANTE:
// a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
// b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;


// Nota: Eu não tenho familiaridade com JSON e XML, então optei por utilizar vetores que contêm os valores de faturamento
// que estariam presentes nos arquivos JSON e XML para resolver este problema. No entanto, estou disposta a aprender 
// e me adaptar ao uso de JSON e XML em projetos futuros, conforme necessário. 
// Abaixo, duas funções simulam o cálculo de faturamento diário, uma para o vetor que representa o JSON 
// e outra para o vetor que representa o XML.

#include <stdio.h>

// Função para calcular o faturamento diário com base nos valores do vetor JSON
void calculoFaturamentoJSON(double faturamentoJSON[], double menor, double maior, int dias_acima_media, int diasJSON){
    int soma = 0, media = 0;
    int dias_com_faturamento = 0;

    // Calcular o menor e o maior valor de faturamento, e somar apenas os dias com faturamento
    for (int i = 0; i < diasJSON; i++) {
        if (faturamentoJSON[i] > 0) {  // Considera apenas dias com faturamento
            if (faturamentoJSON[i] < menor) { 
                menor = faturamentoJSON[i];
            }
            if (faturamentoJSON[i] > maior) {
                maior = faturamentoJSON[i];
            }
            soma += faturamentoJSON[i];
            dias_com_faturamento++;
        }
    }

    // Calcular a média mensal considerando apenas os dias com faturamento
    if (dias_com_faturamento > 0) {
        media = soma / dias_com_faturamento;
    }

    // Calcular o número de dias no mês em que o valor de faturamento diário foi superior à média mensal
    for (int i = 0; i < diasJSON; i++) {
        if (faturamentoJSON[i] > media) {
            dias_acima_media++;
        }
    }
    // Imprimir os resultados
    printf("-----Faturamento JSON-----\n");
    printf("Menor valor de faturamento: %.4lf\n", menor);
    printf("Maior valor de faturamento: %.4lf\n", maior);
    printf("Número de dias acima da média: %d\n", dias_acima_media);
}

// Função para calcular o faturamento diário com base nos valores do vetor XML
void calculoFaturamentoXML(double faturamentoXML[], double menor, double maior, int dias_acima_media, int diasXML){
    int soma = 0, media = 0;
    // int dias = sizeof(*faturamentoXML) / sizeof(faturamentoXML[0]); 
    int dias_com_faturamento = 0;
    // menor = faturamentoXML[0], maior = faturamentoXML[0];
    // dias_acima_media = 0;

    // Calcular o menor e o maior valor de faturamento, e somar apenas os dias com faturamento
    for (int i = 0; i < diasXML; i++) {
        if (faturamentoXML[i] > 0) {  // Considera apenas dias com faturamento
            if (faturamentoXML[i] < menor) { 
                menor = faturamentoXML[i];
            }
            if (faturamentoXML[i] > maior) {
                maior = faturamentoXML[i];
            }
            soma += faturamentoXML[i];
            dias_com_faturamento++;
        }
    }

    // Calcular a média mensal considerando apenas os dias com faturamento
    if (dias_com_faturamento > 0) {
        media = soma / dias_com_faturamento;
    }

    // Calcular o número de dias no mês em que o valor de faturamento diário foi superior à média mensal
    for (int i = 0; i < diasXML; i++) {
        if (faturamentoXML[i] > media) {
            dias_acima_media++;
        }
    }
    // Imprimir os resultados
    printf("\n-----Faturamento XML-----\n");
    printf("Menor valor de faturamento: %.4lf\n", menor);
    printf("Maior valor de faturamento: %.4lf\n", maior);
    printf("Número de dias acima da média: %d\n", dias_acima_media);
}

int main() {
    // Declaração e inicialização das variáveis
    double faturamentoJSON[] = { 22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 
                            0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 
                            2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 
                            18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 
                            13220.495, 8414.61 };

    double faturamentoXML[] = { 31490.7866, 37277.94, 37708.4303, 0.0, 0.0, 17934.2269, 0.0, 
                            6965.1262, 24390.9374, 14279.6481, 0.0, 0.0, 39807.6622, 27261.6304, 
                            39775.6434, 29797.6232, 17216.5017, 0.0, 0.0, 12974.2, 28490.9861, 
                            8748.0937, 8889.0023, 17767.5583, 0.0, 0.0, 3071.3283, 48275.2994,
                            10299.6761, 39874.1073};
                            
    double menorJSON = faturamentoJSON[0], maiorJSON = faturamentoJSON[0];
    double menorXML = faturamentoXML[0], maiorXML = faturamentoXML[0];
    int dias_acima_mediaJSON = 0, dias_acima_mediaXML = 0;
    int diasJSON = sizeof(faturamentoJSON) / sizeof(faturamentoJSON[0]); 
    int diasXML = sizeof(faturamentoXML) / sizeof(faturamentoXML[0]);

    // Chamada das funções para calcular o faturamento diário
    calculoFaturamentoJSON(faturamentoJSON, menorJSON, maiorJSON, dias_acima_mediaJSON, diasJSON);
    calculoFaturamentoXML(faturamentoXML, menorXML, maiorXML, dias_acima_mediaXML, diasXML);

    return 0;
}