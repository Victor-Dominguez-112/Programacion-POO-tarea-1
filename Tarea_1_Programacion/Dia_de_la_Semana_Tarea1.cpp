//Ejercicio de Variables, Funciones y Condiciones. 40 puntos:Entregar un programa de c++ donde al ejecutarlo(presionar Depurar o F5) suceda lo siguiente :
//1) los días de la semana están representados por un valor del 0 al 6, van a tener una variable que diga qué día es,
//2) si es día lunes, se llame una función que imprima "es lunes",
//3) se llame a otra función que imprima "es jueves antes del mediodía" si es jueves antes de las 11:59 AM,
//4) se llame una función dentro de la cual, si es martes, se imprima "es martes" y si no, si es después de las 12:00 PM, se imprima "no es martes pero es después de las 12 PM".
//5) Se haga un ciclo For que se ejecute 1 vez por cada día de la semana, y por cada uno me imprima "Hoy no es DÍA" cuando no sea ese día, e imprima "Hoy sí es DÍA" cuando sí sea el día. (La primera ejecución correspondería al día lunes, la segunda al martes y así sucesivamente) (remplazar DÍA por el día que sí es).

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