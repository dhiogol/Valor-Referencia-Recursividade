#include <iostream>

using namespace std;

void calcularIdade (int idade, int &anos, int &meses, int &dias){
    anos = idade / 365;
    idade %= 365;
    meses = idade / 30;
    dias = idade % 30;

}

int main()
{
    int idade;

    cout << "Digite sua Idade em Dias : ";
    cin >> idade;

    int anos, meses, dias;
    calcularIdade(idade, anos, meses, dias);


    cout << "\nVoce tem " << anos << " anos, " << meses << " Meses, e " << dias << " Dias." << endl;



    return 0;
}
