#include <iostream>
#include "aleatorios.hpp"
#include "metInsercion.hpp"
#include "metShellsort.hpp"

#define total 20

void main() {
	aleatorio* a;

	metInsercion* m;
	metShellsort* s;
	double time1,time2;

	double duration;
	double duration2;

	long* arreglo;
	arreglo = new long[total];
	long* arreglo2;
	arreglo2 = new long[total];

	a = new aleatorio(arreglo, total);

	arreglo = a->set_arreglo();
	arreglo2 = arreglo;

	s = new metShellsort(arreglo2, total);
	m = new metInsercion(arreglo, total);

	for (int i = 0; i < total; i++) std::cout << arreglo2[i] << " ";
	
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	
	time1= NULL;
	time2 = NULL;

	time1 = std::clock();
	m->ordenarIn();
	time2 = std::clock();
	duration = time2 - time1;

	for (int i = 0; i < total; i++) std::cout << arreglo[i] << " ";
	
	std::cout << std::endl << "----------------------------------------------------" << std::endl;

	time1 = std::clock();
	s->ordenarShell();
	time2 = std::clock();
	duration2 = time2 - time1;

	for (int i = 0; i < total; i++) std::cout << arreglo2[i] << " ";
	std::cout << std::endl << "----------------------------------------------------" << std::endl;
	std::cout << std::endl << "La cantidad de datos es " << total << std::endl;
	std::cout << std::endl << "el tiempo de ejecucion por metodo:" << std::endl;
	std::cout << std::endl<<"metodo insercion " <<duration<<" ms"<<std::endl;
	std::cout << std::endl << "metodo shell " << duration2 << " ms" << std::endl;
}
