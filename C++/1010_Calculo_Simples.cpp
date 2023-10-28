#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int codPeca[2], nunPeca[2];
    double valorPeca[2], total;

    for (int i = 0; i < 2; i++){
        cin >> codPeca[i] >> nunPeca[i] >> valorPeca[i];
    }

    total = (nunPeca[0] * valorPeca[0]) + (nunPeca[1] * valorPeca [1]);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}