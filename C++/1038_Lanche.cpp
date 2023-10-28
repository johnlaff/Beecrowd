#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int opcao, quantidade;
    double hotdog, xSalada, xBacon, torrada, refri, total;

    hotdog = 4.00;
    xSalada = 4.50;
    xBacon = 5.00;
    torrada = 2.00;
    refri = 1.50;

    cin >> opcao >> quantidade;

    switch (opcao) {
        case 1:
            total = quantidade * hotdog;
            break;
        case 2:
            total = quantidade * xSalada;
            break;
        case 3:
            total = quantidade * xBacon;
            break;
        case 4:
            total = quantidade * torrada;
            break;
        case 5:
            total = quantidade * refri;
            break;
        default:
            total = 0;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}