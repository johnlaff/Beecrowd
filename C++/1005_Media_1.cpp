#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double A, B, media, pesoA, pesoB;
    cin >> A;
    cin >> B;
    pesoA = 3.5;
    pesoB = 7.5;

    media = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}