#include <iostream>
#include <string>
#include "Dia_de_la_Semana_Tarea1.h"
#include "Array_booleanos.h"

using namespace std;

int main()
{
	cout << endl;
	//TAREA Dia_de_la_Semana
	int dia = 4; //seleccionamos un dia
	int hora = 5; //le damos una hora al sistema

	Lunes(dia);					//mandamos a llamar las funciones
	Juevesmediodia(dia, hora);	//mandamos a llamar las funciones
	Esmartes(dia, hora);		//mandamos a llamar las funciones

	string Semana[7] = { "Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado" };

	for (int i = 0; i < 7; i++) //se entra al ciclo for y hasta encontrar el numero que coincida entre el array y el dia de la semana que le dimos nosotros   
	{
		if (dia == i)
		{
			cout << "Hoy si es " << Semana[i] << endl; //imprecion con el dia o numero que coincida 
		}
		else
		{
			cout << "Hoy no es " << Semana[i] << endl; //el resto de impreciones de los dias de la semana
		}
	}
	cout << endl;
	cout << endl;
	//TAREA Dia_de_la_Semana


	//TAREA ARRAYS 
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
	//TAREA ARRAYS 

	return 0;
}