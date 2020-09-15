#include<iostream>
#include <iostream>
#include <string>

#ifndef PAQUETE_H
#define PAQUETE_H

using namespace  std;
class Paquete
{
public:
    Paquete();
    Paquete(const string id, const string origen, const string destino, float peso);
    string getId();
    void setId(const string value);

    string getOrigen();
    void setOrigen(const string value);

    string getDestino();
    void setDestino(const string value);

    size_t getPeso();
    void setPeso(size_t value);
    friend ostream& operator<<(ostream &out,Paquete a)
    {
        out << a.id << endl <<  a.destino    << endl << a.origen << endl<< a.peso<<endl; return out;
    }
    string origen,destino;
private:
    string id;
    size_t peso;
};

#endif // PAQUETE_H
