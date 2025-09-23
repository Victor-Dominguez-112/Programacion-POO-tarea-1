//Ejercicio de arrays y arrays como par�metros. 70 puntos.
//1) Hacer un array de 5 booleanos.
//1.1) Hacer una funci�n que reciba un array de booleanos como par�metro, y el tama�o del array como otro par�metro.
//1.2) En dicha funci�n, los valores del array se modifican de manera que los �ndices pares sean false y los impares true.
//1.3) Hacer un array de 10 enteros, inicializado con los valores del 0 al 9.
//1.4) Hacer una sobrecarga(es decir : mismo nombre, mismo tipo de retorno, pero distintos par�metros) de la funci�n del punto 1.1) pero que reciba un array de enteros en vez de booleanos.
//1.5) En cada elemento del array remplazar el valor actual con el resultado de dicho valor % 2.
//1.6) En esta funci�n NO pueden usar el operador '[]' para acceder a los elementos del array de enteros.Usen aritm�tica de punteros para acceder a las direcciones de memoria de los elementos del array. (para esto, recuerden que "*(punteroAEjemplo++);" // se mueve una direcci�n de memoria Y luego me da lo que hay dentro. )
//1.7) NO modifiquen la variable recibida como par�metro que apunta al array.En vez de eso, usen una variable auxiliar(que solo exista en esa funci�n) para apuntar a la primera direcci�n de memoria del array y despu�s usen aritm�tica de punteros para desplazar dicha variable auxiliar.
//1.8) Imprimir las direcciones de memoria de los elementos del array seguidos del valor resultante del % 2.

#include <iostream>
using namespace std;

void MyArray(bool Elarray[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		if (i % 2 == 0) //si nuestro �ndice es par lo vamos a guardar como false 
		{
			Elarray[i] = false;
		}
		else //si nuestro �ndice es impar entonces los guardaremos como true
		{
			Elarray[i] = true;
		}
	}
}

void MyArray(int Elarray[], int tamano)
{
	int* puntAux = Elarray;

	for (int i = 0; i < tamano; i++)
	{
		*puntAux = *puntAux % 2; //aqu� guardamos el residuo del resultado de dividir entre 2 para el par e impar 

		cout << "Direccion: " << puntAux << " valor: " << *puntAux << endl; //mandamos a imprimir la direcci�n de nuestra memoria y a su vez el valor de esa posici�n
		puntAux++; //movemos el apuntador hacia la siguiente posici�n hasta terminar el ciclo 
	}

}

//Ayuda en forma para completar el ejercicio 
//https://www.youtube.com/watch?v=akox8OXnP2Y
//https://www.youtube.com/watch?v=_pcfFMFs9-g
//https://learn.microsoft.com/es-es/cpp/cpp/raw-pointers?view=msvc-170
//https://www.w3schools.com/cpp/cpp_pointers.asp
