#include "gatito.hpp"

gatito::gatito(std::string nombre, int vida, int edad, int agilidad)
  : animal(nombre, vida, edad, agilidad)
  {
  /*this->nombre = nombre;
  this->vida = vida;
  this->edad = edad;
  this->agilidad = agilidad;*/

  std::cout << "Gatito creado: " << get_nombre() << '\n';

}

gatito::~gatito() {
  std::cout << "Gatito destruido: " << get_nombre() << '\n';
}

void gatito::maullar() {
  std::cout << get_nombre() << " maulla!" << '\n';
  std::cout << "miau" << '\n';
}
