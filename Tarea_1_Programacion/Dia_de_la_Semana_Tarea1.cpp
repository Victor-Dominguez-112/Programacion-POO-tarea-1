//Ejercicio de Variables, Funciones y Condiciones. 40 puntos:Entregar un programa de c++ donde al ejecutarlo(presionar Depurar o F5) suceda lo siguiente :
//1) los d�as de la semana est�n representados por un valor del 0 al 6, van a tener una variable que diga qu� d�a es,
//2) si es d�a lunes, se llame una funci�n que imprima "es lunes",
//3) se llame a otra funci�n que imprima "es jueves antes del mediod�a" si es jueves antes de las 11:59 AM,
//4) se llame una funci�n dentro de la cual, si es martes, se imprima "es martes" y si no, si es despu�s de las 12:00 PM, se imprima "no es martes pero es despu�s de las 12 PM".
//5) Se haga un ciclo For que se ejecute 1 vez por cada d�a de la semana, y por cada uno me imprima "Hoy no es D�A" cuando no sea ese d�a, e imprima "Hoy s� es D�A" cuando s� sea el d�a. (La primera ejecuci�n corresponder�a al d�a lunes, la segunda al martes y as� sucesivamente) (remplazar D�A por el d�a que s� es).

#include <iostream>
using namespace std;

void Lunes(int dia)
{
	if (dia == 1)
	{
		cout << "Hoy es lunes" << endl;
	}
}

void Juevesmediodia(int dia, int hora, int minuto)
{
	if (dia == 4 && hora < 12 || (hora == 11 && minuto <= 59))
	{
		cout << "Es jueves antes del mediodia" << endl;
	}
}

void Esmartes(int dia, int hora, int minuto)
{
	if (dia == 2)
	{
		cout << "Es martes" << endl;
	}
	else if (hora > 12 && minuto >= 0)
	{
		cout << "No es martes" << endl;
	}
}