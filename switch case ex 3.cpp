#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale ( LC_ALL, " Portuguese " );
float nota;
char categoria;

cout << " Informe uma nota de 0 a 100! ";
cin >> nota;

if (nota < 0 || nota > 100)
{
    cout << " Nota invalida! Por favor, insira uma nota de 0 a 100! " << endl;
}


int faixa;

    if      ( nota >= 90 ) faixa = 1;
    else if ( nota >= 80 ) faixa = 2;
    else if ( nota >= 60 ) faixa = 3;
    else if ( nota >= 40 ) faixa = 4;
    else if ( nota >= 20 ) faixa = 5;
    else                   faixa = 6;

    switch (faixa){

case 1:
    categoria = 'A';
    break;

case 2:
    categoria = 'B';
    break;

case 3:
    categoria = 'C';
    break;

case 4:
    categoria = 'D';
    break;

case 5:
    categoria = 'E';
    break;

case 6:
    categoria = 'F';
    break;
}



    cout << " A nota " << nota << " corresponde a categoria " << categoria << endl;




}
