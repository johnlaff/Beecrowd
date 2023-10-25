#include <stdio.h>

int main() {

    int tempoGasto, velocidadeMedia;
    double quantidadeLitros, distancia;

    scanf("%d", &tempoGasto);
    scanf("%d", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;
    quantidadeLitros = distancia/12;

    printf("%.3lf\n", quantidadeLitros);

    return 0;
}