#ifndef ARCHIVO_H
#define ARCHIVO_H

#include<iostream>	
#include<fstream>

#include "Estadio.h"

using namespace std;

class Archivo
{
public:
	Archivo();
	Estadio* cargarArchivo1();
	Estadio* cargarArchivo2();
	Estadio* cargarArchivo3();
	Estadio* cargarArchivo4();
	~Archivo();
};
#endif // !ARCHIVO

