//Ejercicio de Variables, Funciones y Condiciones. 40 puntos:Entregar un programa de c++ donde al ejecutarlo(presionar Depurar o F5) suceda lo siguiente :
//1) los d�as de la semana est�n representados por un valor del 0 al 6, van a tener una variable que diga qu� d�a es,
//2) si es d�a lunes, se llame una funci�n que imprima "es lunes",
//3) se llame a otra funci�n que imprima "es jueves antes del mediod�a" si es jueves antes de las 11:59 AM,
//4) se llame una funci�n dentro de la cual, si es martes, se imprima "es martes" y si no, si es despu�s de las 12:00 PM, se imprima "no es martes pero es despu�s de las 12 PM".
//5) Se haga un ciclo For que se ejecute 1 vez por cada d�a de la semana, y por cada uno me imprima "Hoy no es D�A" cuando no sea ese d�a, e imprima "Hoy s� es D�A" cuando s� sea el d�a. (La primera ejecuci�n corresponder�a al d�a lunes, la segunda al martes y as� sucesivamente) (remplazar D�A por el d�a que s� es).

#include <iostream>
using namespace std;

//Funci�n encargada de la impresi�n de los lunes de acuerdo al dia que este preestablecido
void Lunes(int dia)
{
	if (dia == 1) //si se cumple con el dia que colocamos se imprimira el mensaje 
	{
		cout << "Hoy es lunes" << endl;
	}
}

//Funci�n encargada de la impresi�n del dia jueves si el dia preestablecido es 4 y la hora menor a 12 se imprimir� el mensaje
void Juevesmediodia(int dia, int hora)
{
	if (dia == 4 && hora < 12) //si el dia coincide con el dado y la hora no supera la establecida se mostrara el mensaje
	{
		cout << "Es jueves antes del mediodia" << endl;
	}
}

//Funci�n encargada de la impresi�n del martes si el dia preestablecido es 2 se imprimir� y si la hora es superior a las 12 imprimir� el segundo mensaje 
void Esmartes(int dia, int hora)
{
	if (dia == 2) //si el dia coincide se imprimira el mensaje 
	{
		cout << "Es martes" << endl;
	}
	else if (hora >= 12)	//si ell dia coincide pero aparte de eso la hora colocada es mayor a 12h.
	{						//este sera el mensaje que se mostrara puesto que cumple con el dia 2 pero la hora es superior.
		cout << "No es martes" << endl;
	}
}
