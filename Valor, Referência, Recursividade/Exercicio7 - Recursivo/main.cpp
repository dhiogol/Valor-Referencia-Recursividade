#include <iostream>

using namespace std;


int fibRecursivo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibRecursivo(n - 1) + fibRecursivo(n - 2);
    }
}

int main() {
    int n;
    cout << "Digite a posicao desejada na sequencia de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "\nErro: A posicao nao pode ser negativa." << endl;
    } else {
        cout << "\nFibonacci Recursivo na posicao " << n << " e " << fibRecursivo(n) << endl;
    }

    return 0;
}
