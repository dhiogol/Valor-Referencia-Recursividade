#include <iostream>

using namespace std;


void calcularMinutos(int totalMinutos, int& horas, int& minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int totalMinutos;
    cout << "Digite o total de minutos desde meia-noite : ";
    cin >> totalMinutos;

    int horas, minutos;
    calcularMinutos(totalMinutos, horas, minutos);

    cout << "\nHora atual : " << horas << " horas e " << minutos << " minutos" << endl;

    return 0;
}

