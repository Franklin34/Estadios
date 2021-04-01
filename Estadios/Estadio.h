#ifndef ESTADIO_H
#define ESTADIO_H
#include <fstream>
#include <sstream>
#include <string.h>
#include <iostream>

class Estadio
{
private:
	std::string nombre;
	int capacidadAsientos;
	int entradasVendidas;
	int disponiblidadAsientos;
public:
	Estadio();
	Estadio(std::string nombre, int capacidadAsientos, int entradasVendidas, int disponiblidadAsientos);
	~Estadio();
	std::string toString();
	Estadio& autoRead(std::ifstream& estadioFile);

};
#endif
