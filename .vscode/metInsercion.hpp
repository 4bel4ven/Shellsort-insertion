
#ifndef _METINSERCION_HPP_
#define _METINSERCION_HPP_
class metInsercion {
private:
	long cantidad;
	long *arreglo;

public:
	
	metInsercion() {
		cantidad = 0;
		arreglo = nullptr;
	};

	metInsercion(long* arr, long cant) : arreglo(arr), cantidad(cant) {};

	~metInsercion() {};

	void ordenarIn() {

		long vartemp1 = NULL, vartemp2 = NULL;
		int contador = NULL;
		for (int i = 0; i < cantidad; ++i) {
			vartemp1 = arreglo[i];
			contador = i;

			while ((contador > 0) && (arreglo[contador - 1] > vartemp1)) {
				arreglo[contador] = arreglo[contador - 1];
				contador--;
			}
			arreglo[contador] = vartemp1;
		};
	};
};
#endif // !_METINSERCION_HPP_
