#ifndef ARTICULO_VACUNO_HPP
#define ARTICULO_VACUNO_HPP

#include "Articulo.hpp"

class ArticuloVacuno : public Articulo {
public:
    ArticuloVacuno(string codigo, string nombre, double precio);
    void mostrar() override;
};

#endif