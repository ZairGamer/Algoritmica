/* Programa: Nombre */
#include <conio.h>
#include <stdio.h>
#include <cstdio>
/* <cstdio es la combinacion de stdio.h y conio.h pero cstdio no permite el getch(); */
int main()
{
	char nombre[20]; char apellido[20];
	printf("Introduzca su nombre:");
	scanf("%s", nombre);
	printf("Introduzca su apellido:");
	scanf("%s", apellido);
	printf("Hola %s %s, buenos dias.", nombre, apellido /* Te dice buenos dias */);
	getch();
	return 0;
}