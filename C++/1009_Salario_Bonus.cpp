#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string nome;
    double salFixo, totalVendas, comissao, total;

    cin >> nome;
    cin >> salFixo;
    cin >> totalVendas;

    comissao = totalVendas * (15.0/100.0);
    total = salFixo + comissao;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

    return 0;
}