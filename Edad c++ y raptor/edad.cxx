/* Programa: Edad */
#include <conio.h>
#include <stdio.h>
#include <cstdio>
int main() 
{
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int anioActual = 2024; /* Año actual fijo */

    /* Solicitar datos de nacimiento */
    printf("Introduzca su dia de nacimiento: ");
    scanf("%d", &diaNacimiento);
    printf("Introduzca su mes de nacimiento: ");
    scanf("%d", &mesNacimiento);
    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &anioNacimiento);

    /* Calcular edad */
    int edad = anioActual - anioNacimiento;

    printf("Su edad es: %d años\n", edad);

    return 0;    
}