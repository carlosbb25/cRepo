/*

	2. Según los estándares internacionales, se manejan diferentes unidades de medición para manejo de
	temperaturas. 
	Familiarízate con las más comunes y soluciona el siguiente problema. Se requiere
	convertir grados Celsius a grados Farenheit. 
	El programa deberá solicitar al usuario un valor inicial en
	grados Celsius y calcular e imprimir su conversión en grados Farenheit. 
	Utiliza un mensaje de salida “X
	grados Celsius equivalen a Y grados Farenheit”. 
	Asegura que los datos numéricos desplieguen un
	máximo de 2 dígitos decimales.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Solicitamos al usuario la temperatura en grados Celsius.
    cout << "Introduce la temperatura en grados Celsius: ";
    cin >> celsius;

    // Realizamos la conversión de grados Celsius a grados Fahrenheit.
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Muestramos el resultado con únicamente dos decimales.
    // fixed asegura que se muestren siempre la cantidad de decimales especificada.
    // setprecision(2) especifica que se mostrarán 2 dígitos decimales en la salida.
    cout << fixed << setprecision(2);
    cout << celsius << " grados Celsius equivalen a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}

