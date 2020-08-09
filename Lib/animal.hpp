#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class animal {
private:
  std::string nombre;
  int vida;
  int edad;
  int agilidad;

public:
  animal (std::string nombre, int vida = 3, int edad = 1, int agilidad = 1);
  virtual ~animal ();

  std::string get_nombre();
  int get_edad();
  int get_agilidad();
  int get_vida();

  void set_nombre(std::string new_name);
  void set_edad(int new_edad);
  void set_agilidad(int new_agilidad);
  void set_vida(int new_vida);
};

#endif
