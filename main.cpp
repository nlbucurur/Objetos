#include "animal.hpp"
#include "gatito.hpp"


int main(void) {
  animal pumpkin("pumpkin", 5, 1, 4);

  gatito michi("Goyo", 3, 7, 3);

  std::cout << pumpkin.get_vida() << '\n';
  std::cout << michi.get_nombre() << '\n';
  michi.maullar();

  return 0;
}
