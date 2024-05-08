/*Elabore un programa que lea un # entero y me diga su sucesor al cubo*/
#include <iostream>
using namespace std;

int suce(int num){
    int suc;
    suc = num + 1;
    return suc;

}
int cubo(int suc){
    int cub;
    cub = suc * suc * suc;
    return cub;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Dime un numero: ";
    cin >> num;
    cout << "El sucesor al cubo es: " << cubo(suce(num));
    return 0;
}
