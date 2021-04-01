#include "Archivo.h"
#include "Control.h"

int main() {
	Control c;
	Archivo* ar = new Archivo;
	Estadio* lc1 = ar->cargarArchivo1();
	Estadio* lc2 = ar->cargarArchivo2();
	Estadio* lc3 = ar->cargarArchivo3();
	Estadio* lc4 = ar->cargarArchivo4();

	c.MenuInicio(lc1, lc2, lc3, lc4);
	return 0;
}


