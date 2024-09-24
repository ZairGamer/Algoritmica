/*Programa: Grados */

#include <iostream>

using namespace std;

int main(){
    double Celsius, fahrenheit;
    char opcion;

    cout << "introduce 'ºF' para convertir de fahrenheit a celsius o 'ºC' para convertir de celsius a fahrenheit: ";
    cin >> opcion;
    if (opcion == 'C' || opcion == 'c') {


    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> Celsius;
    fahrenheit = (Celsius * 1.8) + 32;
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << " °F." <<endl;
}
    else if (opcion == 'F' || opcion == 'f') {
    cout << "introduce la temperatura en grados fahrenheit: ";
    cin >> fahrenheit;
    Celsius = (fahrenheit - 32) / 1.8;
    cout << "La temperatura en grados celsius es: " << Celsius << " °C." <<endl;
}
    return 0;

}