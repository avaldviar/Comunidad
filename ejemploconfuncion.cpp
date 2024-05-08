#include <iostream>
using namespace std;

int obtMayor (int num1, int num2){
    if (num1 > num2){
    return num1;
    }
    else {
        return num2;
    }
}
int obtMenor (int num1, int num2){
    if (num1 > num2){
        return num2;
    }
    else{
        return num1;
    }
}
main ()
{
    int num1, num2;

    cout << "Ingrese el primer digito" << endl;
    cin >> num1;
    cout << "Ingrese el segundo digito" << endl;
    cin >> num2;

    if (num1 == num2)
    {
        cout << "Los numeros son iguales" << endl;
    }
    else {
        cout << "El numero mayor es: " << obtMayor(num1, num2) << endl;
        cout << "El numero menor es: " << obtMenor (num1,num2) << endl;
    }
    
    
}