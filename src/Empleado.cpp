#include "../include/Empleado.hpp"
#include <iostream>
using namespace std;
Empleado::Empleado(string _codigo,string _nombre, string _local, string _puesto){
    codigo = _codigo;
    nombre = _nombre;
    local = _local;
    puesto = _puesto;
}
 
string Empleado::getCodigo(){
    return codigo; 
}
string Empleado::getNombre(){ 
    return nombre; 
}
string Empleado::getLocal(){ 
    return local; 
}
string Empleado::getPuesto(){ 
    return puesto; 
}
void Empleado::mostrar() {  
    cout << "Codigo: " << codigo << " Nombre: " << nombre << "\nLocal: " << local << " Puesto: " << puesto << endl;
}