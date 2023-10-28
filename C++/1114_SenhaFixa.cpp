#include <iostream>
using namespace std;

int main() {

    int tentativa, senha;
    senha = 2002;
    cin >> tentativa;

    while (tentativa != senha){
        cout << "Senha Invalida" << endl;
        cin >> tentativa;
    }
    cout << "Acesso Permitido" << endl;

    return 0;
}