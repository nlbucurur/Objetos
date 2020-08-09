#include "gatito.hpp"

gatito::gatito(std::string nombre, int vida, int edad, int agilidad)
  : nombre(nombre),
    vida(vida),
    edad(edad),
    agilidad(agilidad)
  {
  /*this->nombre = nombre;
  this->vida = vida;
  this->edad = edad;
  this->agilidad = agilidad;*/

  std::cout << "Gatito creado: " << nombre << '\n';

}

gatito::~gatito() {
  std::cout << "Gatito destruido: " << nombre << '\n';
}

std::string gatito::get_nombre() {
  return nombre;
}

int gatito::get_edad() {
  return edad;
}

int gatito::get_vida() {
  return vida;
}

int gatito::get_agilidad() {
  return agilidad;
}

void gatito::set_nombre(std::string new_name){
  // std::cout << "el nombre del gato ha cambiado" << '\n';
  nombre = new_name;
}

void gatito::set_edad(int new_edad){
  edad = new_edad;
}

void gatito::set_agilidad(int new_agilidad){
  agilidad = new_agilidad;
}

void gatito::set_vida(int new_vida){
  vida = new_vida;
}

void gatito::maullar() {
  std::cout << nombre << " maulla!" << '\n';
  std::cout << "miau" << '\n';
}
