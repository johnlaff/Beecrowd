#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double valor, n100,n50,n20,n10,n5,n2, m1, m05, m025, m010, m005, m001;
    cin >> valor;

    // Notas
    n100 = valor / 100;
    n50 = (valor - (n100 * 100)) / 50;
    n20 = (valor - (n100 * 100) - (n50 * 50)) / 20;
    n10 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20)) / 10;
    n5 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10)) / 5);


    return 0;
}