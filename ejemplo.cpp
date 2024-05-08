/*Tener 2 numeros y decir cual es el mayor de 2 numeros*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero:";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "El numero mayor es: " << num1 << endl;
    }
    else if (num2 > num1)
    {
        cout << "El numero mayor es: " << num2 << endl;
    }
    else
    {
        cout << "Los numeros son iguales: " << endl;
    }

    return 0;
}
