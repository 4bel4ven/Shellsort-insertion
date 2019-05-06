
#ifndef METSHELLSORT_HPP
#define METSHELLSORT_HPP

#include <iostream>

class metShellsort
{
public:
	metShellsort();

	metShellsort(long*, long);

	~metShellsort();

	void ordenarShell() {
		int i;
		bool band;
		long temp1;
	
		int salto = cantidad;

		while (salto > 1) {
			salto = salto / 2;
			band = true;

			while (band == true) {

				band = false;
				i = 0;
				while ((i + salto) < cantidad){

					if (arreglo[i] > arreglo[i + salto]) {
						temp1 = arreglo[i];
						arreglo[i] = arreglo[i + salto];
						arreglo[i + salto] = temp1;
						band = true;

					}

					i++;
				}


			}


		}



	}


private:
	long* arreglo;
	long cantidad;
};

metShellsort::metShellsort() { arreglo = nullptr; cantidad = NULL; };

metShellsort::metShellsort(long* arr, long cant) :cantidad(cant), arreglo(arr) {};

metShellsort::~metShellsort()
{
}
#endif // !METSHELLSORT_HPP
