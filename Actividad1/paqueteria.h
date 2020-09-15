#include"paquete.h"
#include<vector>
#include <iostream>
#include <string>

#ifndef PAQUETERIA_H
#define PAQUETERIA_H


class Paqueteria
{
public:
    Paqueteria();
    void insertar(Paquete a);
    void elimiar();
    void ordenarO();
    void ordenarP();
    void mostrar();
    void guardar();
    void recuperar();
    Paquete& operator[](size_t i)
    {
        return paqueterias[i];
    }

    private:
        vector<Paquete> paqueterias;
};

#endif // PAQUETERIA_H
