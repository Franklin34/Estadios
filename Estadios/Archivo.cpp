#include "Archivo.h"


Archivo::Archivo()
{
}


Estadio* Archivo::cargarArchivo1()
{
	Estadio* c = new Estadio();
	Estadio* aux = new Estadio();
	ifstream infile;

	infile.open("liga.txt");

	if (!infile || infile.good() == false) {
		infile.close();
		return c;
	}
	while (infile.eof() == false) {
		c = &aux->autoRead(infile);

	}
	infile.close();
	return c;

}
Estadio* Archivo::cargarArchivo2()
{
	Estadio* c = new Estadio();
	Estadio* aux = new Estadio();
	ifstream infile;

	infile.open("Saprisa.txt");
	if (!infile || infile.good() == false) {
		infile.close();
		return c;
	}
	while (infile.eof() == false) {
		c = &aux->autoRead(infile);
	}
	infile.close();
	return c;
}
Estadio* Archivo::cargarArchivo3()
{
	Estadio* c = new Estadio();
	Estadio* aux = new Estadio();
	ifstream infile;

	infile.open("cartago.txt");
	if (!infile || infile.good() == false) {
		infile.close();
		return c;
	}
	while (infile.eof() == false) {
		c = &aux->autoRead(infile);
	}
	infile.close();
	return c;
}
Estadio* Archivo::cargarArchivo4()
{
	Estadio* c = new Estadio();
	Estadio* aux = new Estadio();
	ifstream infile;

	infile.open("heredia.txt");
	if (!infile || infile.good() == false) {
		infile.close();
		return c;
	}
	while (infile.eof() == false) {
		c = &aux->autoRead(infile);
	}
	infile.close();
	return c;
}
Archivo::~Archivo()
{
}
