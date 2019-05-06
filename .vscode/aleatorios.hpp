
#ifndef _ALEATORIOS_HPP_
#define _ALEATORIOS_HPP_
#include <cstdlib>
#include <ctime>

class aleatorio {
public:
	aleatorio();
	aleatorio(long* arr, long cant);
	~aleatorio();

	void arreglo_aleatorios() {
		srand(time(NULL));
		for (int i = 0; i < cantidad; i++) {
			arreglo[i] = rand() % 10000 + 1;
		}
	}
	
	long* set_arreglo() {
		arreglo_aleatorios();
		return arreglo;
	}
private:
	long* arreglo;
	long cantidad;
};

aleatorio::aleatorio()
{
	arreglo = nullptr;
	cantidad = NULL;
}
aleatorio::aleatorio(long* arr, long cant) : arreglo(arr),cantidad(cant){}

aleatorio::~aleatorio()
{
}
#endif // !_ALEATORIOS_HPP_
