#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    float faturamento_total = sp + rj + mg + es + outros;
    float percentual_sp, percentual_rj, percentual_mg, percentual_es, percentual_outros;

    // Calcular o percentual de representação de cada estado
    percentual_sp = (sp / faturamento_total) * 100;
    percentual_rj = (rj / faturamento_total) * 100;
    percentual_mg = (mg / faturamento_total) * 100;
    percentual_es = (es / faturamento_total) * 100;
    percentual_outros = (outros / faturamento_total) * 100;

    // Imprimir os resultados
    printf("Percentual de representação de SP: %.2f%%\n", percentual_sp);
    printf("Percentual de representação de RJ: %.2f%%\n", percentual_rj);
    printf("Percentual de representação de MG: %.2f%%\n", percentual_mg);
    printf("Percentual de representação de ES: %.2f%%\n", percentual_es);
    printf("Percentual de representação de Outros: %.2f%%\n", percentual_outros);

    return 0;
}