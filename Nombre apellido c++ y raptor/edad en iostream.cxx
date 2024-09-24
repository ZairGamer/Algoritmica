#include <iostream>

using namespace std;

int main()
{
	float diaNacimiento, mesNacimiento, anioNacimiento;
	
    float anioActual = 2024; /* Año actual fijo */

    /* Solicitar datos de nacimiento */
    cout << "Introduzca su dia de nacimiento: ";
    cin >> diaNacimiento;
    cout << "Introduzca su mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Introduzca su año de nacimiento: ";
    cin >> anioNacimiento;

    /* Calcular edad */
    float edad = anioActual - anioNacimiento;

    cout << ("Su edad es: ", edad);

    return 0;    
}