#include <iostream>
#include <string>
#include "Dia_de_la_Semana_Tarea1.h"
#include "Array_booleanos.h"

using namespace std;

int main()
{
	cout << endl;
	//TAREA Dia_de_la_Semana
	int dia = 4;
	int hora = 5;
	int minuto = 30;

	Lunes(dia);
	Juevesmediodia(dia, hora, minuto);
	Esmartes(dia, hora, minuto);

	string Semana[7] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };

	for (int i = 0; i < 7; i++)
	{
		if (dia == i)
		{
			cout << "Hoy si es " << Semana[i] << endl;
		}
		else
		{
			cout << "Hoy no es " << Semana[i] << endl;
		}
	}
	cout << endl;
	cout << endl;
	//TAREA Dia_de_la_Semana


	bool arraydeBool[5];

	MyArray(arraydeBool, 5);

	cout << "Array de booleanos modificado: ";
	for (int i = 0; i < 5; i++)
	{
		cout << (arraydeBool[i] ? "true" : "false") << " ";
	}
	cout << endl;

	int arrayInt[10];
	for (int i = 0; i < 10; i++)
	{
		arrayInt[i] = i;
	}
	MyArray(arrayInt, 10);

	return 0;
}
