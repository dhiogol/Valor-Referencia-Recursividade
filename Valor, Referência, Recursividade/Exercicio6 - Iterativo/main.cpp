#include <iostream>

using namespace std;


int somatorioIterativo(int n) {
    int soma = 0;
    for (int i = 1; i <= n; ++i) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    cout << "Digite um valor para N: ";
    cin >> n;

    if (n <= 0) {
        cout << "\nErro: valor de N deve ser maior que zero." << endl;
    } else {
        cout << "\nSomatorio iterativo de 1 ate " << n << " e " << somatorioIterativo(n) << endl;
    }

    return 0;
}
