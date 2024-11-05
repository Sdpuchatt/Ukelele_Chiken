#include "../include/ArticuloPollo.hpp"
#include <iostream>
using namespace std;

ArticuloPollo::ArticuloPollo(string codigo, string nombre, double precio)
    : Articulo(codigo, nombre, precio) {}

void ArticuloPollo::mostrar() {
    cout << "Art. Pollo - ";
    Articulo::mostrar();
}