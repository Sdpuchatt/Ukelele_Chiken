#include <iostream>
#include "include/Articulo.hpp"
#include "include/Cliente.hpp"
#include "include/Empleado.hpp"
#include "include/Orden.hpp"
#include "include/ArticuloCerdo.hpp"
#include "include/ArticuloPollo.hpp"
#include "include/ArticuloVacuno.hpp"

int main() {
    Articulo* articulo1 = new ArticuloCerdo("CERDO01A", "Pechito de cerdo", 5500.00);
    Articulo* articulo2 = new ArticuloPollo("POLLO01A", "Milanesas Pollo", 8000.00);
    Articulo* articulo3 = new ArticuloVacuno("VACUNO01A", "Tira de asado", 6800.00);
    DetalleArticulo* detalleArticulo1 = new DetalleArticulo (3,articulo1);
    DetalleArticulo* detalleArticulo2 = new DetalleArticulo (4,articulo2);
    DetalleArticulo* detalleArticulo3 = new DetalleArticulo (5,articulo3);

    Cliente* cliente = new Cliente("001C", "Juan Perez", "Belgica 7119");
    Empleado* empleado = new Empleado("001V", "Sergio", "Av Siempre Viva 123", "Vendedor");

    Orden* orden = new Orden("001", cliente, empleado);
    orden->agregarDetalleArticulo(detalleArticulo1);
    orden->agregarDetalleArticulo(detalleArticulo2);
    orden->agregarDetalleArticulo(detalleArticulo3);

    orden->mostrar();

    delete detalleArticulo1;
    delete detalleArticulo2;
    delete detalleArticulo3;
    delete articulo1;
    delete articulo2;
    delete articulo3;
    delete cliente;
    delete empleado;
    delete orden;


    return 0;
}
