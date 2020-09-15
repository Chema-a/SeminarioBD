#include "paqueteria.h"
#include <fstream>
#include <iomanip>
#include <algorithm>
Paqueteria::Paqueteria()
{

}
void Paqueteria::insertar(Paquete a)
{
    paqueterias.push_back(a);
}
void Paqueteria::mostrar()
{
    cout << left;
    cout  << setw(10) << "Paquete" << setw(8) << "Origen" << setw(8) << "Destino"<< setw(6)<<"Peso" << endl << endl;
    for(size_t i(0); i<paqueterias.size(); i++)
    {
        Paquete &a = paqueterias[i];
        cout << i+1 << ") "<< setw(10) <<a.getId() ;
        cout << setw(6)<<a.getOrigen();
        cout << setw(6) <<a.getDestino();
        cout << setw(6)<<a.getPeso();
        cout << endl;

    }
}

void Paqueteria::elimiar()
{
    paqueterias.erase(paqueterias.begin());
}

void Paqueteria::ordenarO()
{
    sort(paqueterias.begin(), paqueterias.end(), [] (const Paquete &p1, const Paquete &p2)
    {
    return p1.origen < p2.origen;
    });
}
void Paqueteria::ordenarP()
{
    sort(paqueterias.begin(), paqueterias.end(), [] (const Paquete &p1, const Paquete &p2)
    {
    return p1.destino < p2.destino;
    });
}
void Paqueteria::guardar()
{
    ofstream archivo("C:\\Users\\chiva\\Desktop\\amazon.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < paqueterias.size(); ++i){
            Paquete &a = paqueterias[i];
            archivo << a;
        }
    }
}

void Paqueteria::recuperar()
{
    ifstream archivo("C:\\Users\\chiva\\Desktop\\amazon.txt");

    if (archivo.is_open()) {
        while (!archivo.eof()) {
            string linea;
            Paquete a;

            getline(archivo, linea);
            if (archivo.eof()) {
                break;
            }
            a.setId(linea);

            getline(archivo, linea);
            a.setOrigen(linea);

            getline(archivo, linea);
            a.setDestino(linea);

            getline(archivo,linea);
            size_t x = stoi(linea);
            a.setPeso(x);

            insertar(a);

        }
    }
}
