#include "matrix.hpp"
#include <iostream>
int main(void) {
  Matrix m = Matrix(3, 3, 1);
  std::cout << "n:" << m.get_n() << ", m: " << m.get_m() << std::endl;
  m.print();
  m.set_elm(1, 1, 0);
  m.print();
}
