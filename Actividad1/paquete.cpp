#include "paquete.h"

Paquete::Paquete()
{

}
string Paquete::getDestino()
{
    return destino;
}
void Paquete::setDestino(const string value)
{
    destino = value;
}
string Paquete::getOrigen()
{
    return origen;
}
void Paquete::setOrigen(const string value)
{
    origen = value;
}
string Paquete::getId()
{
    return id;
}
void Paquete::setId(const string value)
{
    id = value;
}

size_t Paquete::getPeso()
{
    return peso;
}

void Paquete::setPeso(size_t value)
{
    peso = value;
}
