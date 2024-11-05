#include "../include/ArticuloCerdo.hpp"
#include <iostream>
using namespace std;


ArticuloCerdo::ArticuloCerdo(string codigo,string nombre,double precio)
: Articulo(codigo, nombre, precio) {}

void ArticuloCerdo::mostrar() {
    cout << "Art. Cerdo - ";
    Articulo::mostrar();
}