#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double notaA, notaB, notaC, pesoA = 2.0, pesoB = 3.0, pesoC = 5.0, media;

    cin >> notaA >> notaB >> notaC;
    cout << fixed << setprecision(1);
    media = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
    cout << "MEDIA = " << media << endl;

    return 0;
}