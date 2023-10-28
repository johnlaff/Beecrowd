#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double n1, n2, n3, n4, nExame, media, novaMedia;
    int peso1, peso2, peso3, peso4;

    cin >> n1 >> n2 >> n3 >> n4;

    peso1 = 2;
    peso2 = 3;
    peso3 = 4;
    peso4 = 1;

    media = ((n1*peso1) + (n2*peso2) + (n3*peso3) + (n4*peso4)) / (peso1+peso2+peso3+peso4);
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    }
    else {
        cout << "Aluno em exame." << endl;
        cin >> nExame;
        cout << "Nota do exame: " << nExame << endl;
        novaMedia = (nExame + media )/ 2.0;
        if (novaMedia >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << novaMedia << endl;
    }

    return 0;
}