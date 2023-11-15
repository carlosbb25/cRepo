/*

	2. Seg�n los est�ndares internacionales, se manejan diferentes unidades de medici�n para manejo de
	temperaturas. 
	Familiar�zate con las m�s comunes y soluciona el siguiente problema. Se requiere
	convertir grados Celsius a grados Farenheit. 
	El programa deber� solicitar al usuario un valor inicial en
	grados Celsius y calcular e imprimir su conversi�n en grados Farenheit. 
	Utiliza un mensaje de salida �X
	grados Celsius equivalen a Y grados Farenheit�. 
	Asegura que los datos num�ricos desplieguen un
	m�ximo de 2 d�gitos decimales.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Solicitamos al usuario la temperatura en grados Celsius.
    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> celsius;

    // Realizamos la conversi�n de grados Celsius a grados Fahrenheit.
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Muestramos el resultado con �nicamente dos decimales.
    // fixed asegura que se muestren siempre la cantidad de decimales especificada.
    // setprecision(2) especifica que se mostrar�n 2 d�gitos decimales en la salida.
    cout << fixed << setprecision(2);
    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}

