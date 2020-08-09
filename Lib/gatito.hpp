#ifndef GATITO_HPP
#define GATITO_HPP

#include <iostream>
#include <string>

class gatito {
private:
  std::string nombre;
  int vida;
  int edad;
  int agilidad;

public:
  gatito (std::string nombre, int vida=5, int edad=3, int agilidad=15);
  ~gatito ();

  std::string get_nombre();
  int get_edad();
  int get_agilidad();
  int get_vida();

  void set_nombre(std::string new_name);
  void set_edad(int new_edad);
  void set_agilidad(int new_agilidad);
  void set_vida(int new_vida);
  void maullar();
};

#endif
