#include <iostream>
using namespace std;

int main() {
    int mes, ano, dias;

    cout << "Digite o número do mês (1-12): ";
    cin >> mes;

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
          dias = 31;
          break;
        }

        case 4:
        case 6:
        case 9:
        case 11:
        {
            dias = 30;
            break;
        }

        case 2:
        {
            cout << "Digite o ano: ";
            cin >> ano;
            // Verificação de ano bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias = 29; // Fevereiro em ano bissexto
            } else {
                dias = 28; // Fevereiro em ano não bissexto
            }
            break;
        }
        default:
            cout << "Mês inválido!" << endl;
            return 1;
    }

    cout << "O mês " << mes << " tem " << dias << " dias." << endl;
    return 0;
}








