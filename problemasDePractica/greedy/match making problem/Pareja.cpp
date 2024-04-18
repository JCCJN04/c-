// Nombre: Jorge Enrique Serangelli Andrade 
// Fecha: 03/04/2024
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int hombres = 1, mujeres = 1, numeroCasos = 0;

	vector<int> cantidadDeHombres, cantidadDeMujeres;
	while ((cin >> hombres >> mujeres) && (hombres != 0 || mujeres != 0)) 
	{
		cantidadDeHombres.clear();
		cantidadDeMujeres.clear();
		for (int i = 0; i < hombres; i++) 
		{
			int hombre = 0;
			cin >> hombre;
			cantidadDeHombres.push_back(hombre);
		}

		for (int i = 0; i < mujeres; i++) 
		{
			int mujer = 0; 
			cin >> mujer; 
			cantidadDeMujeres.push_back(mujer); 
		}

		if (cantidadDeHombres.size() <= cantidadDeMujeres.size()) 
		{
			cout << "Caso "<< ++numeroCasos <<": " << 0 << endl;
		}
		else 
		{
			cout << "Caso " << ++numeroCasos << ": " << abs(hombres-mujeres) << " " <<  *min_element(cantidadDeHombres.begin(), cantidadDeHombres.end())<< endl; 
		}

	}
	return 0;
}