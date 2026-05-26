#include <stdio.h>
#include "energia_cinetica.h"

int main() {
    double massa, velocidade;
    double energia_cinetica;

    printf("Digite a massa do objeto (em kg): ");
    scanf("%lf", &massa);

    printf("Digite a velocidade do objeto (em m/s): ");
    scanf("%lf", &velocidade);

    energia_cinetica = calcular_energia_cinetica(massa, velocidade);
    printf("A energia cinética do objeto eh: %.2lf Joules\n", energia_cinetica);

    return 0;
}
