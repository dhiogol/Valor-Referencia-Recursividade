#include <iostream>

using namespace std;


void cacularSegundos(int vSegundos, int& horas, int& minutos, int& segundos) {
    horas = vSegundos / 3600;
    vSegundos %= 3600;
    minutos = vSegundos / 60;
    segundos = vSegundos % 60;
}

int main() {

    int vSegundos;

    cout << "Digite o tempo em segundos: ";
    cin >> vSegundos;

    int horas, minutos, segundos;
    cacularSegundos(vSegundos, horas, minutos, segundos);

    cout << "\nTempo : " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos" << endl;

    return 0;
}

