#include <iostream>

using namespace std;

int pesquisa(int vetor[], int tamanho, int valor) {
    int esquerda = 0, direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == valor) {
            return meio;
        }
        if (vetor[meio] < valor) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valoresParaPesquisar[] = {75, 22, 90};
    for (int valor : valoresParaPesquisar) {
        int resultado = pesquisa(vetor, tamanho, valor);
        if (resultado != -1) {
            cout << "Valor " << valor << " encontrado na posicao " << resultado << "\n" << endl;
        } else {
            cout << "Valor " << valor << " nao encontrado no vetor" << endl;
        }
    }

    return 0;
}

