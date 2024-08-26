#include <iostream>

using namespace std;


int vRecursivo(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + vRecursivo(n - 1);
}

int main() {
    int n;
    cout << "Digite um valor para N : ";
    cin >> n;

    //cout << "\n";


    if (n <= 0) {
        cout << "\nErro: valor de N deve ser maior que zero." << endl;
    } else {
        cout << "\nSomatorio recursivo de 1 ate " << n << " e " << vRecursivo(n) << endl;
    }

    return 0;
}

