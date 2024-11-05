#ifndef ARTICULO_CERDO_HPP
#define ARTICULO_CERDO_HPP

#include "Articulo.hpp"

class ArticuloCerdo : public Articulo {
public:
    ArticuloCerdo(string codigo, string nombre, double precio);
    void mostrar() override;
};

#endif
