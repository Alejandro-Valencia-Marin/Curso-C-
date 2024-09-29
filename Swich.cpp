#include <iostream>
using namespace std;
int main()
{
     //calculadora
      char opcion;
      int num1, num2;
     cout << "Beivenido a la calculadora elija un modo: " << endl;
     cout << " + sumar" << endl;
     cout << " - restar" << endl;
     cout << " / dividir" << endl;
     cout << " * multiplicar" << endl;
     cin >> opcion; 
     
     switch (opcion)
     {
     case '+' :
        cout << "dame 2 numeros a sumar";
        cin >> num1 >> num2; 
        cout << "la suma de los numeros es la siguiente: " << num1 + num2;  

        break;

     case '-' :
        cout << "dame 2 numeros a restar";
        cin >> num1 >> num2; 
        cout << "la resta de los numeros es la siguiente: " << num1 - num2;  

        break;

     case '/' :
        cout << "dame 2 numeros a dividir";
        cin >> num1 >> num2; 
        cout << "la division de los numeros es la siguiente: " << num1 / num2;  

        break;

     case '*' :
        cout << "dame 2 numeros a Multiplicar";
        cin >> num1 >> num2; 
        cout << "la Multiplicacion de los numeros es la siguiente: " << num1 * num2;  

        break;
     
     default:
        break;
     }

    return 0;
}
