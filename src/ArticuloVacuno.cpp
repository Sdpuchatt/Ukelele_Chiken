#include "../include/ArticuloVacuno.hpp"
#include <iostream>

ArticuloVacuno::ArticuloVacuno(string codigo, string nombre, double precio)
    : Articulo(codigo, nombre, precio) {}

void ArticuloVacuno::mostrar() {
    cout << "Art. Vacuno - ";
    Articulo::mostrar();
}
