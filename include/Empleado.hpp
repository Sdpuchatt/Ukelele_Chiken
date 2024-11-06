#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
using namespace std;
class Empleado {
private:
    string codigo;
    string nombre;
    string local;
    string puesto;

public:
    Empleado(string codigo, string nombre, string local, string puesto);
    string getCodigo();
    string getNombre();
    string getLocal();
    string getPuesto();
    void mostrar();
};

#endif