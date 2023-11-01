#include <stdio.h>

int main() {

    int idadeDias, ano, meses;
    scanf("%d", &idadeDias);

    ano = idadeDias/365;
    idadeDias %= 365;

    meses = idadeDias/30;
    idadeDias %= 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);;
    printf("%d dia(s)\n", idadeDias);

    return 0;
}