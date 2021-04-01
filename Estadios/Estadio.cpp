#include "Estadio.h"

Estadio::Estadio()
{
    nombre = "";
    capacidadAsientos = 0;
    entradasVendidas = 0;
    disponiblidadAsientos = 0;
}

Estadio::Estadio(std::string nombre, int capacidadAsientos, int entradasVendidas, int disponiblidadAsientos)
{
    this->nombre = nombre;
    this->capacidadAsientos = capacidadAsientos;
    this->entradasVendidas = entradasVendidas;
    this->disponiblidadAsientos = disponiblidadAsientos;
}

Estadio::~Estadio()
{
}

std::string Estadio::toString()
{
    std::stringstream x;
    std::cout << "=================== Federacion de Futbol ==================================" << std::endl << std::endl;
    x << "  Nombre del Estadio: " << nombre << std::endl;
    x << "  Capacidad de Asientos: " << capacidadAsientos << std::endl;
    x << "  Entradas Vendidas: " << entradasVendidas << std::endl;
    x << "  Disponibilidad de asientos: " << disponiblidadAsientos << std::endl;

    return x.str();
}

Estadio& Estadio::autoRead(std::ifstream& estadioFile)
{
    std::string nombreA;
    int capacidadAsientosA;
    int entradasVendidasA;
    int disponiblidadAsientosA;

    estadioFile >> nombreA;
    estadioFile >> capacidadAsientosA;
    estadioFile >> entradasVendidasA;
    estadioFile >> disponiblidadAsientosA;


    disponiblidadAsientosA = capacidadAsientosA - entradasVendidasA;

    if (disponiblidadAsientosA < 0) {
        disponiblidadAsientosA = 0;
    }

    return (*new Estadio(nombreA, capacidadAsientosA, entradasVendidasA, disponiblidadAsientosA));
}
