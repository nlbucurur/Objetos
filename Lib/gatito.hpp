#ifndef GATITO_HPP
#define GATITO_HPP

#include "animal.hpp"

class gatito : public animal {
private:

public:
  gatito (std::string nombre, int vida=5, int edad=3, int agilidad=15);
  ~gatito ();

  void maullar();
};

#endif
