#include <iostream>
#include <locale>
using namespace std;

int main()
{

 float num1;
 float num2;
 char  operacao;
setlocale( LC_ALL, " Portuguese " ); // não sei pq, mas n funcionou.
 cout << " informe o numero 1: ";
 cin >> num1;

 cout << " informe o numero 2: ";
 cin >> num2;

 cout << " escolha uma das operações abaixo: " << endl;
 cout << " Opção 1 - Adição " << endl;
 cout << " Opção 2 - Subtração " << endl;
 cout << " Opção 3 - Multiplicação " << endl;
 cout << " Opção 4 - Divisão " << endl;

 cin >> operacao;

 switch (operacao)
 {
 case '1':
     {
         cout << num1 << " + " << num2 << " = " << num1 + num2;
         break;
     }
 case '2':
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    }
 case '3':
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    }
 case '4':
 if ( num2 == 0 )
        {
            cout << " Impossível dividir por Zero! ";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
 }
}




