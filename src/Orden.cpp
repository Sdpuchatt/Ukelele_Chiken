#include "../include/Orden.hpp"
#include <iostream>

using namespace std;
Orden::Orden(string _codigo, Cliente* _cliente, Empleado* _empleado){
    codigo = _codigo;
    cliente = _cliente;
    empleado = _empleado;
}
   

string Orden::getCodigo() { 
    return codigo; 
}
Cliente* Orden::getCliente() { 
    return cliente; 
}
Empleado* Orden::getEmpleado() { 
    return empleado; 
}
void Orden::agregarDetalleArticulo(DetalleArticulo* articulo){ 
    detalleArticulos.push_back(articulo); 
}

void Orden::mostrarDetalleArticulos() {
    for (DetalleArticulo* detalleArticulo : detalleArticulos) {
        detalleArticulo->mostrar();
    }
}

void Orden::mostrar() {
    cout << "\n***************"<< " Ropa de Seguridad " <<"***************"<<endl<<endl;
    cout << "************* Codigo: " << codigo << " ************" << endl;
    cout << "Empleado:" << endl;
    empleado->mostrar();
    cout << "**************************************" <<endl;
    cout << "Cliente:" << endl;
    cliente->mostrar();
    cout << "**************************************" <<endl;
    cout << "Articulos:" << endl;
    mostrarDetalleArticulos();
}
