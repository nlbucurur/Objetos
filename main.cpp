#include "gatito.hpp"


int main(void) {
  gatito michi(std::string("Goyo"));
  michi.set_vida(10);

  std::cout << "Mi gatito se llamaba " << michi.get_nombre() << ".\n";
  std::cout << "Mi gatito tenía " << michi.get_edad() << " años." << '\n';
  std::cout << "Mi gatito tenía " << michi.get_agilidad() << " puntos de agilidad.\n";
  std::cout << "Mi gatito tenía " << michi.get_vida() << " puntos de vida.\n";

  std::string nombre_nuevo_gatito = michi.get_nombre();
  int vida_nuevo_gatito = michi.get_vida();

  michi.set_nombre(std::string("Coco"));
  michi.set_vida(6);
  michi.set_edad(4);
  michi.set_agilidad(10);

  gatito michi_2(nombre_nuevo_gatito, vida_nuevo_gatito);

  std::cout << '\n';
  std::cout << "Mi gatito ahora se llama " << michi.get_nombre() << ".\n";
  std::cout << "Mi gatito ahora tiene " << michi.get_edad() << " años." << '\n';
  std::cout << "Mi gatito ahora tiene " << michi.get_agilidad() << " puntos de agilidad.\n";
  std::cout << "Mi gatito ahora tiene " << michi.get_vida() << " puntos de vida.\n";

  std::cout << '\n';
  std::cout << "Mi nuevo gatito se llama " << michi_2.get_nombre() << ".\n";
  std::cout << "Mi nuevo gatito tiene " << michi_2.get_edad() << " años." << '\n';
  std::cout << "Mi nuevo gatito tiene " << michi_2.get_agilidad() << " puntos de agilidad.\n";
  std::cout << "Mi nuevo gatito tiene " << michi_2.get_vida() << " puntos de vida.\n";

  michi.maullar();
  michi_2.maullar();

  return 0;
}
