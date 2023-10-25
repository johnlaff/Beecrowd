#include <stdio.h>

int main() {

    char nomeVendedor[50];
    double salarioFixo, totalVendas, bonus;

    scanf("%s", nomeVendedor);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);

    bonus = totalVendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", salarioFixo + bonus);
    return 0;
}
