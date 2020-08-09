#include "animal.hpp"

animal::animal(std::string nombre,
               int vida,
               int edad,
               int agilidad)
  : nombre(nombre),
  vida(vida),
  edad(edad),
  agilidad(agilidad) { }

animal::~animal() { }

std::string animal::get_nombre() {
  return nombre;
}

int animal::get_edad() {
  return edad;
}

int animal::get_vida() {
  return vida;
}

int animal::get_agilidad() {
  return agilidad;
}

void animal::set_nombre(std::string new_name){
  // std::cout << "el nombre del gato ha cambiado" << '\n';
  nombre = new_name;
}

void animal::set_edad(int new_edad){
  edad = new_edad;
}

void animal::set_agilidad(int new_agilidad){
  agilidad = new_agilidad;
}

void animal::set_vida(int new_vida){
  vida = new_vida;
}
