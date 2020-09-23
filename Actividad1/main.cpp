#include "paqueteria.h"


int main()
{
    Paqueteria pa;
    string op;
    cout << "Bienvenido al menu, elige un opción"<< endl;
    while(true)
    {

    cout << "1) Insertar"<<endl <<"2) Mostrar"<<endl <<"3) Eliminar"<<endl<<"4) Ordenar por Origen"<<endl <<"5) Ordenar por Destino"
    <<endl <<"6) Guardar" << endl <<"7) Recuperar"<<endl<< "0) Salir"<< endl;
    getline(cin, op);
    if (op == "1") {
        Paquete a;
        string id, origen, destino;
        size_t peso;
        cout << "ID: ";
        getline(cin, id);
        a.setId(id);
        cout << "Origen: ";
        getline(cin, origen);
        a.setOrigen(origen);
        cout << "Destino: ";
        getline(cin, destino);
        a.setDestino(destino);
        cout << "Peso: ";
        cin >> peso;
        a.setPeso(peso);
        cin.ignore();
        pa.insertar(a);
        cout << "Agregado Exitosamente" << endl;
        system("PAUSE");
        system("CLS");
    }
    else if (op == "2")
    {
        system("CLS");
        pa.mostrar();
        system("PAUSE");
        system("CLS");

    }
    else if (op == "3")
    {

        pa.elimiar();
        system("CLS");
    }
    else if (op == "4")
    {
        pa.ordenarO();
        system("CLS");
    }
    else if (op == "5")
    {
        pa.ordenarP();
        system("CLS");
    }
    else if (op == "6")
    {
        pa.guardar();
        system("CLS");
    }
    else if (op == "7")
    {
        pa.recuperar();
        system("CLS");
    }
    else if (op == "0")
        cout << "Muy bien te esperamos para tu siguiente envió" << endl;
        break;
    }
    return 0;
}
