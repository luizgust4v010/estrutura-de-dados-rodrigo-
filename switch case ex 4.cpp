#include <iostream>
#include <locale>
using namespace std;

int main()
{

 float num1;
 float num2;
 char  operacao;
setlocale( LC_ALL, " Portuguese " ); // n�o sei pq, mas n funcionou.
 cout << " informe o numero 1: ";
 cin >> num1;

 cout << " informe o numero 2: ";
 cin >> num2;

 cout << " escolha uma das opera��es abaixo: " << endl;
 cout << " Op��o 1 - Adi��o " << endl;
 cout << " Op��o 2 - Subtra��o " << endl;
 cout << " Op��o 3 - Multiplica��o " << endl;
 cout << " Op��o 4 - Divis�o " << endl;

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
            cout << " Imposs�vel dividir por Zero! ";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
 }
}




